#include <bits/stdc++.h>
using namespace std;

void createEdge(map<int, vector<int>> &mp, int u, int v)
{
    mp[u].push_back(v);
    mp[v].push_back(u);
}

int bfs(map<int, vector<int>> &mp, int start, int end)
{
    map<int, int> visited;
    queue<int> qu;
    int count = 0;
    // int start = mp.begin()->first;
    qu.push(start);
    qu.push(-1);
    while (!qu.empty())
    {
        int top = qu.front();
        if (top == -1)
        {
            count++;
            qu.pop();
            continue;
        }
        if (top == end)
            return count;
        qu.pop();
        if (visited[top] != 1)
        {
            // count++;
            // cout << top << "--";
            visited[top] = 1;
            int n = mp[top].size();
            for (int i = 0; i < n; i++)
            {
                qu.push(mp[top][i]);
            }
            qu.push(-1);
        }
    }
    return -1;
}

int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
        map<int, vector<int>> mp;
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;
        vector<int> p(m, 0);
        for (int i = 0; i < m; i++)
            cin >> p[i];
        sort(p.begin(), p.end());
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            createEdge(mp, u, v);
        }
        cout << "\n";
        int ab = bfs(mp, a, b);
        int bc = bfs(mp, b, c);
        int ac = bfs(mp, a, c);
        cout << ab << " " << bc << " " << ac << "\n";
        // int a1=bfs(mp,a,b);
    }

    return 0;
}