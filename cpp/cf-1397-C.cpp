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

ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    if (n <= 1)
    {
        cout << "1 1\n0\n1 1\n0\n";
        // a[0] += 2;
        cout << "1 1\n"
             << (-1) * a[0];
        return;
    }
    ll l = n - 1;
    cout << "1 1\n";
    ll ot = lcm(a[0], n);
    cout << ot - a[0] << "\n";
    a[0] = ot;

    cout << "2 " << n << "\n";
    for (ll i = 1; i < n; i++)
    {
        ll over = 0, k = 0, temp = a[i];
        if (a[i] < 0)
        {
            k = (a[i] / l) + 1;
            a[i] += (k * l);
        }
        // cout << a[i] << "--" << i << endl;
        ll oy = lcm(a[i], n);
        if (oy <= n)
        {
            if (a[i] != n)
            {
                ll f = n - a[i];
                oy = a[i] + (a[i] * l);
            }
        }
        cout << oy - temp << " ";
        a[i] = oy;
    }
    cout << "\n";
    cout << "1 " << n << "\n";
    for (ll i = 0; i < n; i++)
    {
        cout << (-1) * a[i] << " ";
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