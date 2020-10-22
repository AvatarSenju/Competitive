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

// ll recur2(vector<ll> &a, ll n, ll w, ll i, ll wmax)
// {
//     // cout << i << " " << w << "\n";
//     if (i >= n || w < 0)
//         return 0;

//     if (w == 0)
//         return recur2(a, n, wmax, i + 1, wmax);

//     return max((a[i] + recur2(a, n, w - 1, i + 1, wmax)), recur2(a, n, wmax, i + 1, wmax));
// }

void dynamic(vector<ll> &a, ll n, ll wid, vector<ll> &dp, vector<ll> &pre)
{
    int curSum = 0;
    ll w = wid;
    dp[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        w--;
        int minIdx = i;
        if (w >= 0)
            dp[i] = dp[i - 1];
        else
        {
            for (int j = 1; j <= wid; j++)
            {
                if (a[minIdx] > a[i - j])
                {
                    minIdx = i - j;
                }
            }
            if (minIdx == i)
            {
                dp[i] = dp[i - 1];
                w = wid;
            }
            else
            {
                curSum = 0;
                w = wid - (i - minIdx - 1);
                for (int k = w; k < wid; k++)
                    curSu if (minIdx == 0)
                        dp[i] = curSum;
                else
                {
                    dp[i] = curSum + dp[minIdx - 1];
                }
            }
        }

        //     if (w == wid)
        //         curSum = a[i];
        //     else
        //     {

        //         // curSum = max(pre[i + 1] - pre[i - (wid - w)], dp[i - 1] + a[i]);
        //         curSum = dp[i - 1] + a[i];
        //     }

        //     w--;
        //     int minIdx = i;
        //     if (w >= 0)
        //         dp[i] = curSum;
        //     else
        //     {

        //         for (int j = 1; j <= wid; j++)
        //         {
        //             if (a[minIdx] > a[i - j])
        //             {
        //                 minIdx = i - j;
        //             }
        //         }
        //         if (minIdx == i)
        //         {
        //             dp[i] = dp[i - 1];
        //             w = wid;
        //         }
        //         else
        //         {
        //             w = wid - (i - minIdx - 1);
        //             curSum = pre[i + 1] - pre[i - (wid - w)];
        //             if (minIdx == 0)
        //                 dp[i] = curSum;
        //             else
        //             {
        //                 dp[i] = curSum + dp[minIdx - 1];
        //             }
        //         }
        //     }
        // }
    } // return dp[n - 1];
}

ll recur(vector<ll> &a, ll n, ll w, ll i, ll wmax, vector<vector<ll>> &dp, vector<ll> &dp2)
{
    // cout << i << " " << w << "\n";
    if (i >= n || w < 0)
        return 0;
    if (dp2[i] != 0)
        return dp2[i];
    if (w == 0)
    {
        // dp[w][i] = max(dp[w][i], recur(a, n, wmax, i + 1, wmax, dp, dp2));
        dp2[i] = max(dp2[i], recur(a, n, wmax, i + 1, wmax, dp, dp2));
    }
    else
    {
        // dp[w][i] = max({dp[w][i], (a[i] + recur(a, n, w - 1, i + 1, wmax, dp, dp2)), recur(a, n, wmax, i + 1, wmax, dp, dp2)});
        dp2[i] = max({dp2[i], (a[i] + recur(a, n, w - 1, i + 1, wmax, dp, dp2)), recur(a, n, wmax, i + 1, wmax, dp, dp2)});
    }
    return dp2[i];
}

void solve()
{
    ll n, w, d;
    cin >> n >> w >> d;

    vector<ll> ar(n, 0);
    vector<ll> pre(n + 1, 0);

    for (ll i = 0; i < n; i++)
        cin >> ar[i];
    pre[0] = 0;
    // pre[1] = ar[0];

    for (ll i = 0; i < n; i++)
        pre[i + 1] = ar[i] + pre[i];

    d = w + d;
    vector<vector<ll>> dp(w + 1, vector<ll>(n + 1, 0));
    vector<ll> dp1(n + 1, 0);
    vector<ll> dp2(n + 1, 0);
    dynamic(ar, n, w, dp1, pre);
    dynamic(ar, n, d, dp2, pre);
    for (auto i : dp2)
        cout << i << " ";
    return;
    // vector<vector<ll>> dp(w + 1, vector<ll>(n + 1, 0));

    ll a = dp1[n - 1];
    ll b = dp2[n - 1];
    // ll a = recur2(ar, n, w, 0, w);

    // for (auto i : dp2)
    //     cout << i << " ";
    // cout << endl;
    // dp.clear();
    // dp.resize(d + 1, vector<ll>(n + 1, 0));
    // dp2.clear();
    // dp.resize((n + 1, 0));

    // ll b = recur(ar, n, d, 0, d, dp, dp2);
    // // ll b = recur2(ar, n, d, 0, d);
    // for (auto i : dp)
    // {
    //     for (auto j : i)
    //         cout << j << " ";
    //     cout << "\n";
    // }
    // cout << a << "  ---  " << b << endl;
    if (a == b)
        cout << "Both are Right";
    else if (a > b)
        cout << "Wrong " << abs(a - b);
    else
        cout << "Right " << abs(a - b);
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
