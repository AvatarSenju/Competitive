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
    ull n, k;
    cin >> n >> k;
    vector<ll> a(n, 0);
    vector<ll> b(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mn = *max_element(all(a));
    for (int i = 0; i < n; i++)
    {
        a[i] = mn - a[i];
    }
    mn = *max_element(all(a));
    for (int i = 0; i < n; i++)
    {
        b[i] = mn - a[i];
    }
    if (k % 2 != 0)
    {
        for (auto i : a)
            cout << i << " ";
    }
    // cout << "\n";
    else
    {
        for (auto i : b)
            cout << i << " ";
    }
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