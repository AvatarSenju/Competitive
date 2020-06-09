#include <bits/stdc++.h>
using namespace std;

bool isValid(int x, int y, vector<vector<bool>> &vis)
{
    int h = vis.size();
    int w = vis[0].size();
    if (x < 0 || x >= h || y < 0 || y >= w || vis[x][y])
        return false;
    return true;
}

//input boolean matrix
//node as pair of pair of cordinates and distance
int solve(vector<vector<bool>> &mat, pair<int, int> start, pair<int, int> end)
{

    int h = mat.size();
    int w = mat[0].size();
    vector<vector<bool>> vis(h, vector<bool>(w, false));

    int x = start.first;
    int y = start.second;
    int dis = 0;
    int moveX[] = {-1, 0, 1, 0};
    int moveY[] = {0, 1, 0, -1};
    if (mat[x][y])
        return -1;
    queue<pair<pair<int, int>, int>> qu;
    qu.push(make_pair(start, 0));
    while (!qu.empty())
    {
        int curX = qu.front().first.first;
        int curY = qu.front().first.second;
        int curDis = qu.front().second;
        qu.pop();
        if (vis[curX][curY])
            continue;
        vis[curX][curY] = true;
        if (curX == end.first && curY == end.second)
            return curDis;
        // dis++;
        for (int i = 0; i < 4; i++)
        {
            int nX = moveX[i] + curX;
            int nY = moveY[i] + curY;

            if (isValid(nX, nY, vis) && !mat[nX][nY])
                qu.push(make_pair(make_pair(nX, nY), curDis + 1));
        }
    }
    return -1;
}

int main()
{
    vector<vector<bool>> mat{
        {0, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 0, 0},
        {0, 0, 0, 0}};

    cout << solve(mat, {3, 0}, {0, 0}) << "\n";

    return 0;
}