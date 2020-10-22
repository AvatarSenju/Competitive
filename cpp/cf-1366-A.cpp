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

    ll a, b, c = 0;
    cin >> a >> b;
    ll h = max(a, b);
    ll l = min(a, b);
    if (a == 0 || b == 0)
    {
        cout << 0;
        return;
    }
    c = min(h - l - 1, l);
    h = h - (2 * c);
    l = l - c;
    ll temp1 = max(h, l);
    ll temp2 = min(h, l);
    h = temp1;
    l = temp2;
    ll d = 0;
    if (h >= 3 && l >= 3)
    {
        d = l / 3;

        l -= d * 3;
        h -= d * 3;
        d *= 2;
    }
    c += d;
    temp1 = max(h, l);
    temp2 = min(h, l);
    h = temp1;
    l = temp2;
    if (h <= 0 || l <= 0)
    {
        cout << c;
        return;
    }
    temp1 = max(h, l);
    temp2 = min(h, l);
    h = temp1;
    l = temp2;
    while (h >= 2 && l >= 1)
    {
        h -= 2;
        l -= 1;
        c++;
        ll temp1 = max(h, l);
        ll temp2 = min(h, l);
        h = temp1;
        l = temp2;
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