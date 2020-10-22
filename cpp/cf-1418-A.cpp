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
    long double x, y, k;
    cin >> x >> y >> k;
    long double nc = k * y;
    long double ns = k;
    long double t = nc + ns - 1;
    long double s = 0;
    s = ceil(t / (x - 1));
    // if ((ull)t % (x - 1) == 0)
    //     s = ceil(t / (x - 1)) + 1;
    // else
    //     s = ceil(t / (x - 1));
    s += k;
    cout << (ull)s;
    // cout<<"hi";
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