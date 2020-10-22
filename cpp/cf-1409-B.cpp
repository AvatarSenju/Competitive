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
    ll a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    ll ax = max(a - n, x);
    ll by = max(b - n, y);
    if (ax < by)
    {
        if (n >= a - x)
        {
            n = n - (a - x);
            a = x;
            b = max(b - n, y);
        }
        else
        {
            a = a - n;
        }
    }
    else
    {
        if (n >= b - y)
        {
            n = n - (b - y);
            b = y;
            a = max(a - n, x);
        }
        else
        {
            b = b - n;
        }
    }
    cout << a * b;
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