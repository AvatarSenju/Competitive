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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ar(n + 1, vector<int>(m + 1, 0));
    set<int> si;
    set<int> sj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> ar[i][j];
            if (ar[i][j] == 1)
            {
                si.insert(i);
                sj.insert(j);
            }
            // else if (ar[i][j] == 0 && (si.find(i) != si.end() || si.find(j) != si.end()))
            //     ar[i][j] = 1;
        }
    }
    // cout << "----------\n";
    // for (auto s : si)
    //     cout << s << " ";
    // cout << "\n";
    // for (auto s : sj)
    //     cout << s << " ";
    // cout << "\n";
    int count = 0;
    // cout << "-----"
    //      << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == 0 && (si.find(i) == si.end() && sj.find(j) == sj.end()))
            {
                // cout << i << " " << j << "\n";
                count++;
                si.insert(i);
                sj.insert(j);
                ar[i][j] = 1;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     int cm = 0;
    //     for (int j = 0; j < m; j++)
    //         if (ar[i][j] == 0 && (si.find(i) == si.end() && si.find(j) == si.end()))
    //             cm++;
    //     ar[i][m] = cm;
    // }

    // for (int j = 0; j < m; j++)
    // {
    //     int cm = 0;
    //     for (int i = 0; i < n; i++)
    //         if (ar[i][j] == 0 && (si.find(i) == si.end() && si.find(j) == si.end()))
    //             cm++;
    //     ar[j][n] = cm;
    // }
    // for (auto i : ar)
    // {
    //     for (auto j : i)
    //         cout << j << " ";
    //     cout << "\n";
    // }

    // for (auto i : ar)
    //     for (auto j : i)
    //         if (j == 0)
    //             count++;
    if (count % 2 == 0)
        cout << "Vivek";
    else
    {
        cout << "Ashish";
    }

    // cout << (count % 2 == 0) ? "Vivek" : "Ashish";
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