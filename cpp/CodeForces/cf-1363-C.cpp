#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i, a, b) for (i = a; i < b; i++)
#define repr(i, a, b) for (i = a; i >= b; i--)
#define F first
#define S second
#define p_b push_back
#define m_p make_pair
#define all(a) (a).begin(), (a).end()

const int mxn = 1000;
// map<int, vector<int>> g;
set<int> lf;

void build(map<int, vector<int>> &g, int n)
{
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        g[u].push_back(v);
        g[v].push_back(u);
    }
}

int bfs(map<int, vector<int>> &g, int start)
{
    map<int, int> visited;
    queue<int> qu;
    int level = 1;
    // int start = mp.begin()->first;
    qu.push(start);
    while (!qu.empty())
    {
        int top = qu.front();
        qu.pop();
        if (top == -1)
        {
            cout << "\n";
            level++;
            continue;
        }
        if (visited[top] != 1)
        {
            // cout << top << "--" << level << "-->";

            visited[top] = 1;
            int n = g[top].size();
            for (int i = 0; i < n; i++)
            {
                if (visited[g[top][i]] == 1)
                    continue;
                cout << g[top][i] << "--" << level << "-->";

                // if (lf.find(g[top][i]) != lf.end())
                //     return level + 1;
                qu.push(g[top][i]);
            }
            qu.push(-1);
        }
        // level++;
    }
    return 1;
}

// int bfs(int x, int level)
// {
//     vector<bool> vis(n, false);
//     vector<int> cur = g[x];
//     for (int i = 0; i < cur.size(); i++)
//     {
//         if (lf.find(cur[i]) != lf.end())
//             return level;
//         else
//         {
//             /* code */
//         }
//     }
// }

void solve()
{
    int n, x;
    cin >> n >> x;
    map<int, vector<int>> g;
    build(g, n - 1);
    for (int i = 0; i < n; i++)
    {
        if (g[i].size() == 1)
            lf.insert(i);
    }
    if (lf.find(x) != lf.end())
    {
        cout << "Ayush";
        return;
    }

    int level = bfs(g, x);
    if (level % 2 == 0)
        cout << "Ashish";
    else
    {
        cout << "Ayush";
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}