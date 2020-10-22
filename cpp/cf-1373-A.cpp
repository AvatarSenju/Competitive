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
    int res[] = {0, 0};
    ll a, b, c;
    int f1 = 0, f2 = 0;
    cin >> a >> b >> c;
    if (a >= c)
    {
        f1 = 1;
        res[0] = -1;
    }
    if (a * b <= c)
    {
        f2 = 1;
        res[1] = -1;
    }
    if (f1 == 0)
        res[0] = 1;
    if (f2 == 0)
        res[1] = b;
    cout << res[0] << " " << res[1];
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