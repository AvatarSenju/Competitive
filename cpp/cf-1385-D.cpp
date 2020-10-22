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

int calc(string s, int l, int r, char c)
{
    if (l == r)
    {
        if (s[l] == c)
            return 0;
        else
            return 1;
    }
    if (r - l + 1 == 2)
    {
        if (s[l] == c)
            return calc(s, l + 1, r, c + 1);
        else if (s[r] == c)
            return calc(s, l, r - 1, c + 1);
        else
        {
            int a = calc(s, l + 1, r, c + 1) + calc(s, l, r - 1, c);
            int b = calc(s, l, r - 1, c + 1) + calc(s, l + 1, r, c);
            return min({a, b, 2});
        }
    }
    else
    {
        int mid = (r + l) / 2;
        int a = calc(s, l, mid, c) + calc(s, mid + 1, r, c + 1);
        int b = calc(s, l, mid, c + 1) + calc(s, mid + 1, r, c);
        return min(a, b);
    }
}

int cal2(string s, int l, int r, char c, vector<vector<int>> &dp)
{
    if (dp[l][r] != 140000)
        return dp[l][r];
    if (l == r)
    {
        if (s[l] == c)
        {
            dp[l][r] = 0;
            return 0;
        }
        else
        {
            dp[l][r] = 1;
            return 1;
        }
    }
    if (r - l + 1 == 2)
    {
        if (s[l] == c)
        {
            dp[l][r] = min(dp[l][r], cal2(s, l + 1, r, c + 1, dp));
            return dp[l][r];
        }
        // return ;
        else if (s[r] == c)
        {
            dp[l][r] = min(dp[l][r], cal2(s, l, r - 1, c + 1, dp));
            return dp[l][r];
        }
        // return ;
        else
        {
            int a = cal2(s, l + 1, r, c + 1, dp) + cal2(s, l, r - 1, c, dp);
            int b = cal2(s, l, r - 1, c + 1, dp) + cal2(s, l + 1, r, c, dp);
            dp[l][r] = min({dp[l][r], a, b, 2});
            return min({a, b, 2});
        }
    }
    int mid = (l + r) / 2;
    int a = 0, b = 0;
    for (int i = l; i <= mid; i++)
        if (s[i] == c)
            a++;
    for (int i = mid + 1; i <= r; i++)
        if (s[i] == c)
            b++;

    int mi = min(a, b);
    int ma = max(a, b);

    int h = mid - a + 1 - l;
    int g = mid - b + 1 - l;
    dp[l][r] = min({h + cal2(s, mid + 1, r, c + 1, dp), g + cal2(s, l, mid, c + 1, dp), dp[l][r]});
    return dp[l][r];
    // if (a < b)
    // {
    //     int k = mid - b + 1 - l;
    //     return k + cal2(s, l, mid, c + 1);
    // }
    // else if (a > b)
    // {
    //     int k = mid - a + 1 - l;
    //     return k + cal2(s, mid + 1, r, c + 1);
    // }
    // else
    // {
    //     int k = mid - a + 1 - l;
    //     return k + min(cal2(s, mid + 1, r, c + 1), cal2(s, l, mid, c + 1));
    // }
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<vector<int>> dp(n, vector<int>(n, 140000));
    // int ar[][][];
    int res = cal2(s, 0, n - 1, 'a', dp);
    cout << res;
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