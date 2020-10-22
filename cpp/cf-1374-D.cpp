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
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n, 0);
    vector<ll> r(k, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        r[a[i] % k]++;
    }

    // for (auto i : r)
    //     cout << i << " ";
    // cout << endl;
    ll m = *max_element(all(r));

    if (accumulate(all(r), 0) == r[0])
    {
        cout << 0;
        return;
    }
    ll x = 0;
    x = (k * (m - 1));
    // cout << "x--" << x << "-";
    int i = 0;
    for (; i < k; i++)
        if (r[i] == m)
            break;
    // cout << " --" << i << "--" << m;
    if (i != 0)
        x = x + (k - i) + 1;
    else
    {
        x += k;
    }

    // for(int i=k-1;i>=0)
    // sort(all(r));
    // if (r[n - 1] == 0)
    // {
    //     cout << 0;
    //     return;
    // }
    // ll x = 0, c = 0;
    // x = k - r[n - 1] + 1;
    // for (int i = 0; i < n; i++)
    //     cout << r[i] << " ";
    // cout << "\n";
    // for (ll i = n - 2; i >= 0; i--)
    // {
    //     // cout << x << " ";
    //     if (r[i] == 0)
    //         break;
    //     if (r[i] = r[i + 1])
    //     {
    //         x += k;
    //     }
    //     else
    //     {
    //         ll l = x % k;
    //         if (l <= r[i])
    //         {
    //             x = x + (r[i] - l) + 1;
    //         }
    //         else
    //         {
    //             x = x + (k - l - r[i]) + 1;
    //         }
    //     }
    // }
    cout << x;
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