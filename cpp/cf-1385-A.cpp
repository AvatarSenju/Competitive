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
    int x, y, z;
    cin >> x >> y >> z;
    set<int> st;
    st.insert(x);
    st.insert(z);
    st.insert(y);
    if (st.size() == 3)
    {
        cout << "NO";
        return;
    }
    if (st.size() == 1)
    {
        cout << "YES\n";
        cout << x << " " << y << " " << z;
        return;
    }
    else
    {
        int m = min({x, y, z});
        int count = 0;
        if (x == m)
            count++;
        if (y == m)
            count++;
        if (z == m)
            count++;
        if (count == 2)
        {
            cout << "NO";
            return;
        }
        else
        {
            cout << "YES\n";
            int k = max({x, y, z});
            cout << m << " " << m << " " << k;
        }
    }

    // if ((x < y && x < z && y != z) || (x > y && x > z && y == z))
    // {
    //     cout << "NO";
    //     return;
    // }
    // if (y == z)
    // {
    //     cout << "YES\n";
    //     cout << x << " " << x << " " << z;
    // }
    // else
    // {
    //     cout << "YES\n";
    //     int k = min(y, z);
    //     cout << x << " " << k << " " << k;
    // }
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