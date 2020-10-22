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
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll c = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= 0)
        {
            c += a[i];
        }
        else
        {
            if (c <= 0)
                continue;
            else
            {
                if (c >= abs(a[i]))
                {
                    c += a[i];
                    a[i] = 0;
                }
                else
                {
                    a[i] += c;
                    c = 0;
                }
            }
        }
    }
    cout << c;
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