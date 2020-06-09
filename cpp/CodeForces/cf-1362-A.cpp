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
    ull a, b;
    cin >> a >> b;
    ull count = 0;
    if (a == b)
    {
        cout << 0;
        return;
    }
    if (a < b)
    {
        while (a < b)
        {
            a = a << 1;
            count++;
        }
        if (a != b)
        {
            cout << -1;
            return;
        }
        ull e = count / 3;
        count %= 3;
        e += (count / 2);
        count %= 2;
        e += count;
        cout << e;
        return;
    }
    else
    {
        while (a > b && a % 2 == 0)
        {
            a = a >> 1;
            count++;
        }
        if (a != b)
        {
            cout << -1;
            return;
        }
        ull e = count / 3;
        count %= 3;
        e += (count / 2);
        count %= 2;
        e += count;
        cout << e;
        return;
    }
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