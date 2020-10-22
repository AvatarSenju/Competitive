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
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    int k = 0, r1 = 0, r2 = 0;
    bool sq = false, re = false;

    for (auto j : mp)
    {
        if (j.second >= 4)
        {
            k = j.first;
            sq = true;
            break;
        }
    }

    mp[k] -= 4;
    int flag = 0;

    for (auto j : mp)
    {
        if (j.second >= 4)
        {
            // k = j.first;
            re = true;
            break;
        }
        else if (j.second >= 2)
        {
            if (flag == 1)
            {
                re = true;
                break;
            }
            else
                flag = 1;
        }
    }
    mp[k] += 4;

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        // bool sq = false, re = false;
        char r;
        cin >> r;
        int x;
        cin >> x;
        if (r == '+' && sq && re)
        {
            cout << "YES\n";
            mp[x]++;
            continue;
        }
        // if (x != k && x != r1 && x != r2 && sq && re)
        // {
        //     cout << "YES\n";
        //     if (r == '+')
        //         mp[x]++;
        //     else
        //         mp[x]--;

        //     continue;
        // }
        if (r == '+')
            mp[x]++;
        else
            mp[x]--;

        if (mp[x] >= 4)
            sq = true;
        mp[x] -= 4;
        for (auto j : mp)
        {
            if (j.second >= 4)
            {
                // k = j.first;
                re = true;
                break;
            }
            else if (j.second >= 2)
            {
                if (flag == 1)
                {
                    re = true;
                    break;
                }
                else
                    flag = 1;
            }
        }
        mp[x] += 4;
        if (sq && re)
        {
            cout << "YES\n";

            continue;
        }
        else
        {
            cout << "NO\n";
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}