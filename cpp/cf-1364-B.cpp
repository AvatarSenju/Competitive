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
    vector<int> a(n, 0);
    int i;
    rep(i, 0, n)
            cin >>
        a[i];

    vector<int> dp(n, 0);
    vector<int> ans;
    dp[1] = abs(a[0] - a[1]);
    ans.push_back(a[0]);
    ans.push_back(a[1]);

    for (int i = 2; i < n; i++)
    {
        int cur = a[i];
        int a1 = a[i - 1];
        int a2 = a[i - 2];
        if (dp[i - 2] + abs(cur - a2) >= dp[i - 1] + abs(cur - a1))
        {
            ans.pop_back();
            ans.push_back(cur);
        }
        else
        {
            ans.push_back(cur);
        }
    }
    for (auto i : ans)
        cout << i << " ";
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