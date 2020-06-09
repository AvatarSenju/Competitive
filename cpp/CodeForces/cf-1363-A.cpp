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
    int n, x, i;
    int od = 0, ev = 0;
    cin >> n >> x;
    vector<int> ar(n, 0);
    rep(i, 0, n)
    {
        cin >> ar[i];
        if (ar[i] % 2 == 1)
            od++;
    }
    if (n == 1)
    {
        if (od == 1)
            cout << "YES";
        else
            cout << "NO";
        return;
    }
    if (od == 0)
    {
        cout << "NO";
        return;
    }
    ev = n - od;
    if (x % 2 != 0)
    {
        if (od >= x)
        {
            cout << "YES";
            return;
        }
        else if (od % 2 != 0 || (od - 1 + ev) >= x)
        {
            cout << "YES";
            return;
        }
        else
        {
            cout << "NO";
            return;
        }
    }
    else
    {
        if (od >= 1 && ev >= 1)
        {
            od--;
            ev--;
            if (ev + od > x - 2 || (od % 2 == 0 && ev % 2 == 0))
            {
                cout << "YES";
                return;
            }
        }
        cout << "NO";
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