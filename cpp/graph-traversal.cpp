#include <bits/stdc++.h>
using namespace std;

void createEdge(map<int, vector<int>> &mp, int u, int v)
{
    mp[u].push_back(v);
    mp[v].push_back(u);
}

void dfs(map<int, vector<int>> &mp, int start)
{
    map<int, int> visited;
    stack<int> st;
    // to ensure traversal to unconnected node
    for (auto m : mp)
        st.push(m.first);
    st.push(start);
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        if (visited[top] != 1)
        {
            cout << top << "--";
            visited[top] = 1;
            int n = mp[top].size();
            for (int i = 0; i < n; i++)
            {
                st.push(mp[top][i]);
            }
        }
    }
}

void bfs(map<int, vector<int>> &mp, int start)
{
    map<int, int> visited;
    queue<int> qu;
    // int start = mp.begin()->first;
    qu.push(start);
    while (!qu.empty())
    {
        int top = qu.front();
        qu.pop();
        if (visited[top] != 1)
        {
            cout << top << "--";
            visited[top] = 1;
            int n = mp[top].size();
            for (int i = 0; i < n; i++)
            {
                qu.push(mp[top][i]);
            }
        }
    }
}

int main()
{
    map<int, vector<int>> mp;
    createEdge(mp, 1, 2);
    createEdge(mp, 1, 3);
    createEdge(mp, 2, 4);
    createEdge(mp, 4, 6);
    createEdge(mp, 3, 7);
    createEdge(mp, 3, 5);
    // createEdge(mp, 0, 0);

    //cout<<mp.begin()->first;
    dfs(mp, 1);
    cout << endl;
    bfs(mp, 1);
    return 0;
}