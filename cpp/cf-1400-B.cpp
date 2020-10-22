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

int cs = 0;
int cw = 0;

//dp0-no.,1-cs,2-cw
int calc(vector<vector<int>> &dp, int w, int cs, int cw, int s, int x)
{
    if (w < 0 || (cs <= 0 && cw <= 0))
        return 0;
    if (dp[0][w] != 0)
        return dp[0][w];
    int ts = 0;
    int tk = 0;
    if (cs > 0 && w - s >= 0)
    {
        ts = calc(dp, w - s, cs - 1, cw, s, x);
    }
    if (cw > 0 && w - x >= 0)
        tk = calc(dp, w - x, cs, cw - 1, s, x);
    if (ts > tk)
    {
        dp[0][w] = 1 + ts;
        dp[1][w]++;
    }
    else if (tk > ts)
    {
        dp[0][w] = 1 + tk;
        dp[2][w]++;
    }
    // dp[w] = max(ts + 1, tk + 1);
    return dp[0][w];
}

int find(int sz, int s, int w)
{

    vector<int> dp(sz + 1, 0);
    for (int i = 1; i < sz; i++)
    {
        if (cs <= 0 && cw <= 0)
            break;
        int ts = 0, tw = 0;
        if (cs > 0 && i - s >= 0)
            ts = s + dp[i - s];
        if (cw > 0 && i - w >= 0)
            tw = w + dp[i - w];
        if (ts > tw)
        {
            cs--;
            dp[i] = ts;
        }
        else if (ts < tw)
        {
            cw--;
            dp[i] = tw;
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }
    return *max_element(all(dp));
}

void solve()
{
    int p, f;
    cin >> p >> f;
    // int cs, cw;
    cin >> cs >> cw;
    int s, w;
    cin >> s >> w;
    vector<vector<int>> dp(3, vector<int>(p + 1, 0));
    // int res = find(p, s, w);
    // res += find(f, s, w);
    int res = calc(dp, p, cs, cw, s, w);

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