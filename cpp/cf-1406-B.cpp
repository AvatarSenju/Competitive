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
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<pair<int, int>> b(n, {0, 0});
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            b[i] = make_pair(abs(a[i]), -1);
        else
        {
            b[i] = make_pair(abs(a[i]), +1);
        }
    }
    int si = 1;
    sort(all(b));
    int prod = 1;
    for (int i = n - 1; i >= n - 4; i--)
    {
        prod *= b[i].first;
        b[i] = m_p(-100000, -1);
        si *= b[i].second;
    }
    sort(all(b));
    for (int i = n - 1; i >= 0; i--)
    {
        if (b[i].second == 1)
        {
            prod *= b[i].first;
            si *= b[i].second;

            cout << prod * si;
            return;
        }
    }
    prod *= b[n - 1].first;
    si *= b[n - 1].second;

    cout << prod * si;
    return;
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