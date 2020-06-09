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
    int n, m, k;
    cin >> n >> m >> k;
    int a = n / k;
    if (m == 0)
    {
        cout << 0;
        return;
    }
    if (m <= a)
    {
        cout << m;
        return;
    }
    int d = m - a;
    if (d <= k - 1)
    {
        cout << a - 1;
        return;
    }
    int f = (int)ceil((float)(d) / (k - 1));
    cout << a - f;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}