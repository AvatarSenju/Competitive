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

    int n = 0;
    cin >> n;
    if (n < 2)
    {
        cout << "NO";
        return;
    }
    vector<int> s(n, 0);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int od = 0, ev = 0;
    for (auto i : s)
    {
        if (i % 2 == 0)
            ev++;
        else
            od++;
    }
    // if (ev % 2 != od % 2)
    // {
    //     cout << "NO";
    //     return;
    // }

    if ((ev % 2 == 0))
    {
        cout << "YES";
        return;
    }

    sort(all(s));
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(s[i + 1] - s[i]) == 1)
        {
            cout << "YES";
            return;
            // ev--;
            // od--;
            // i++;
        }
    }
    // if ((ev % 2 == 0))
    // {
    //     cout << "YES";
    //     return;
    // }
    cout << "NO";
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