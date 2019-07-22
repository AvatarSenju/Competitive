#include <bits/stdc++.h>
using namespace std;

void createEdge(map<int, vector<int>> &mp, int u, int v)
{
    mp[u].push_back(v);
    mp[v].push_back(u);
}

void bfs(map<int, vector<int>> mp, int start)
{
    queue<int> qu;
    map<int, int> parent;
    // qu.push(mp.begin()->first);
    // parent[mp.begin()->first] = mp.begin()->first;
    qu.push(start);
    parent[start] = start;
    while (!qu.empty())
    {
        int cur = qu.front();
        qu.pop();

        // parent[cur] = 1;
        int n = mp[cur].size();
        while (n--)
        {
            int next = mp[cur].back();
            mp[cur].pop_back();

            if (parent.find(next) != parent.end())
            {
                if (parent[cur] != next)
                {
                    cout << "\nnot minimum at node " << next << endl;
                    return;
                }

                continue;
            }

            parent[next] = cur;
            qu.push(next);
        }
        cout << " -- " << cur;
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

    //cout<<mp.begin()->first;
    bfs(mp, 1);
    return 0;
}