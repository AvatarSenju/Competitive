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

void solve()
{
    int n;
    cin >> n;
    unordered_map<int, vector<int>> g;
    vector<int> f(n + 1, 0);
    set<int> maxNodes;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
        f[u]++;
        f[v]++;
    }
    int flag = 0, flag1 = 0, idx = -1, idx1 = -1;
    int maxf = *max_element(all(f));
    for (int i = 0; i < n + 1; i++)
    {
        if (f[i] == maxf)
        {
            // idx=i;
            maxNodes.insert(i);
            // if (flag == 1)
            // {
            //     idx1 = i;
            //     flag1 = 1;
            //     // break;
            // }
            // else
            // {
            //     flag = 1;
            //     idx = i;
            // }
        }
    }
    if (maxNodes.size() <= 1)
    {
        for (auto i : g)
        {
            cout << i.first << " " << i.second[0] << "\n";
            cout << i.first << " " << i.second[0];
            return;
        }
    }
    else
    {
        auto it = maxNodes.begin();

        int i = *it;
        if (i == 1)
            ++it;
        i = *it;
        // ++it;
        // int j = *it;
        while (true)
        {
            for (auto b : g[i])
            {
                if (maxNodes.find(b) == maxNodes.end())
                {
                    ++it;
                    int j = *it;
                    cout << i << " " << b << "\n";
                    cout << 1 << " " << b;
                    return;
                }
            }
            ++it;
            i = *it;
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}