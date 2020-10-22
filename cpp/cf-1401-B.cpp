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
    ull a, b, c, x, y, z;
    cin >> a >> b >> c;
    cin >> x >> y >> z;

    ll sum = 0, mn;
    //2-->1
    if (c > 0 && y > 0)
    {
        mn = min(c, y);
        c -= mn;
        y -= mn;
        sum += (2 * mn);
    }

    //2-->2
    if (c > 0 && z > 0)
    {
        mn = min(c, z);
        c -= mn;
        z -= mn;
        // sum += (2 * mn);
    }
    //2-->0
    if (c > 0 && x > 0)
    {
        mn = min(c, x);
        c -= mn;
        x -= mn;
        // sum += (2 * mn);
    }
    //0-->2
    if (a > 0 && z > 0)
    {
        mn = min(a, z);
        a -= mn;
        z -= mn;
        // sum += (2 * mn);
    }
    //0-->0
    if (a > 0 && x > 0)
    {
        mn = min(a, x);
        a -= mn;
        x -= mn;
        // sum += (2 * mn);
    }
    //0-->1
    if (a > 0 && y > 0)
    {
        mn = min(a, y);
        a -= mn;
        y -= mn;
        // sum += (2 * mn);
    }

    // 1-->0
    if (b > 0 && x > 0)
    {
        mn = min(b, x);
        b -= mn;
        x -= mn;
        // sum += (2 * mn);
    }

    // 1-->1
    if (b > 0 && y > 0)
    {
        mn = min(b, y);
        b -= mn;
        y -= mn;
        // sum += (2 * mn);
    }
    //1-->2
    if (b > 0 && z > 0)
    {
        mn = min(b, z);
        b -= mn;
        z -= mn;
        sum -= (2 * mn);
    }
    cout << sum;
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