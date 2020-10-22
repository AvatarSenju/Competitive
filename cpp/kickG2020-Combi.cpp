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

ll solve()
{
    ll w, n;
    cin >> w >> n;
    // vector<vector<int>>(n, vector<int>(n, 0));
    vector<int> a(w, 0);
    ll res = INT_MAX;
    for (int i = 0; i < w; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        ll target = i;
        ll cur = 0;
        for (int j = 0; j < w; j++)
        {
            cur += min(abs((target - a[j]) % n), abs(((target - a[j]) % n) + n));
        }
        res = min(res, cur);
    }

    // ll res = 0;

    return res;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll res = solve();
        cout << "Case  #" << i << ": " << res << "\n";
    }

    return 0;
}