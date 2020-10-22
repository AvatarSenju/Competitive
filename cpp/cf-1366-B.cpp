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

bool contain(int l, int r, int x, int y)
{
    if (x <= r && x >= l)
        return true;
    if (y <= r && y >= l)
        return true;
    if (x >= l && y <= r)
        return true;
    if (x <= l && y >= r)
        return true;
    return false;
}

void solve()
{
    ll n, x, m;
    cin >> n >> x >> m;

    ll l = n + 2, r = -1;
    int flag = 0;
    int i = 0;
    for (i = 0; i < m; i++)
    {
        ll le, ri;
        cin >> le >> ri;
        if (x <= ri && x >= le)
        {
            flag = 1;
            l = le;
            r = ri;
            i++;
            break;
        }
    }
    if (flag == 0)
    {
        cout << 1;
        return;
    }
    for (; i < m; i++)
    {
        ll le, ri;
        cin >> le >> ri;
        if (contain(l, r, le, ri))

        {
            l = min(l, le);
            r = max(r, ri);
        }
    }

    cout << (r - l + 1);
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