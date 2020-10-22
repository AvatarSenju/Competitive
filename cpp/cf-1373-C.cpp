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
    string s;
    cin >> s;
    int n = s.length();
    ll res = 0;
    vector<ll> ar(n, 0);
    int pl = 0;
    if (s[0] == '-')
        ar[0] = 2;
    else
    {
        ar[0] = 1;
        pl++;
    }

    for (int i = 1; i < n; i++)
    {
        if (s[i] == '+')
        {
            ar[i] = ar[i - 1] + 1;
            pl++;
        }
        else
        {
            if (pl > 0)
            {
                ar[i] = ar[i - 1] + 1;
                pl--;
            }
            else
            {
                ar[i] = ar[i - 1] + i + 2;
            }
        }
    }
    cout << ar[n - 1];
    // // ll init = 0;
    // for (ll init = 0;; init++)
    // {

    //     ll cur = init;
    //     bool ok = true;
    //     for (int i = 0; i < s.length(); i++)
    //     {
    //         res = res + 1;
    //         if (s[i] == '+')
    //             cur = cur + 1;
    //         else
    //             cur = cur - 1;
    //         if (cur < 0)
    //         {
    //             ok = false;
    //             break;
    //         }
    //     }
    //     if (ok)
    //         break;
    // }
    // cout << res;
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