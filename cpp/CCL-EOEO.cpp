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
    ull n;
    int f = 0;
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 0;
        return;
    }

    while (!f)
    {
        if (n & 1)
            f = 1;
        n = n >> 1;
    }
    cout << n;
    return;

    // if (n % 2 != 0)
    // {
    //     ull k = n / 2;
    //     cout << k;
    //     return;
    // }
    // else
    // {
    // }
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