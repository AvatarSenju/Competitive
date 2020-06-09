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
    ll sum = 0;
    int f = 0, n = s.length();
    if (n < 2)
    {
        cout << 0;
        return;
    }
    if (n == 2)
    {
        if (s[0] == s[1])
            cout << 0;
        else
            cout << 1;
        return;
    }
    vector<int> dp(n, 0);
    //dp[i]=cm,dp[i-1]=pm,dp[i-2]=ptm
    int pm, cm, ptm;
    pm = cm = ptm = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            // cm = pm;
            // pm = ptm;
            dp[i] = dp[i - 1];
        }
        else
        {
            dp[i] = max(dp[i - 1], 1 + dp[i - 2]);
            // cm = max(pm, 1 + ptm);
            // sum = max(sum, (ll)cm);
            // ptm = pm;
            // pm = cm;
        }
    }
    // cout << sum;
    cout << dp[n - 1];
    return;
    // if (s[0] == 'x')
    //     f = 1;
    // else
    //     f = -1;

    // for (int i = 1; i < n; i++)
    // {
    //     if (f == 1)
    //     {
    //         if (s[i] == 'y')
    //         {
    //             sum++;
    //             f = 0;
    //             i++;
    //         }
    //     }
    //     else if (f == -1)
    //     {
    //         if (s[i] == 'x')
    //         {
    //             sum++;
    //             f = 0;
    //             i++;
    //         }
    //     }
    //     else
    //     {
    //         if (s[i] == 'x')
    //             f = 1;
    //         else
    //         {
    //             f = -1;
    //         }
    //     }
    // }
    // cout << sum;
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