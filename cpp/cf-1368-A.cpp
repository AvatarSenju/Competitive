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
    ll a, b, n;
    cin >> a >> b >> n;
    if (a + b > n)
    {
        cout << 1;
        return;
    }
    ll h = max(a, b);
    ll l = min(a, b);
    ll count = 0;
    ll t = h + l;

    while (t <= n)
    {
        count++;
        t = h + l;
        l = h;
        h = t;
    }
    cout << count;
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