#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>> &mat, vector<vector<bool>> &vis, int i, int j)
{
    int sz = 0;
    // vis[i][j]=true;
    int h = mat.size(), w = mat[0].size();
    stack<pair<int, int>> st;
    st.push(make_pair(i, j));

    while (!st.empty())
    {
        int x = st.top().first;
        int y = st.top().second;
        st.pop();
        if (vis[x][y])
            continue;
        vis[x][y] = true;
        // if(mat[x][y]==0)
        //     continue;
        sz++;

        if (x > 0 && mat[x - 1][y] == 1)
            st.push(make_pair(x - 1, y));
        if (x < h - 1 && mat[x + 1][y] == 1)
            st.push(make_pair(x + 1, y));
        if (y > 0 && mat[x][y - 1] == 1)
            st.push(make_pair(x, y - 1));
        if (y < w - 1 && mat[x][y + 1] == 1)
            st.push(make_pair(x, y + 1));
    }
    return sz;
}

vector<int> getSize(vector<vector<int>> &mat)
{
    int h = mat.size();
    if (h < 1)
        return {};
    int w = mat[0].size();
    vector<vector<bool>> vis(mat.size(), vector<bool>(mat[0].size(), false));
    vector<int> res;

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (mat[i][j] == 1 && !vis[i][j])
                res.push_back(dfs(mat, vis, i, j));
        }
    }
    return res;
}

int main()
{
    vector<vector<int>> mat{{1, 1, 1}, {1, 0, 1}};

    vector<int> rs = getSize(mat);
    for (auto v : rs)
        cout << v << "\n";
    return 0;
}