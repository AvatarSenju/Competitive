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
    ll n;
    cin >> n;
    vector<ll> a(n, 0);
    vector<ll> b(n, 0);
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (ll i = 0; i < n; i++)

    {
        cin >> b[i];
        mp[b[i]]--;
    }
    for (auto m : mp)
        if (m.second < 0)
        {
            cout << "No";
            return;
        }
    if (n % 2 == 0)
    {
        cout << "Yes";
    }
    else
    {
        ll k = n / 2;
        if (a[k] != b[k])
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";
        }
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