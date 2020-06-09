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
    // int a = 1;
    // int b = 5;
    // int c = (a + b) % b;
    // cout << c;
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    unordered_map<int, int> mp;
    unordered_map<int, int> sum;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        mp[a[i]] = i;
    }

    for (int i = 0; i < n; i++)
    {
        mp[b[i]] = ((mp[b[i]] - i) + n) % n;
    }
    for (int i = 0; i < n; i++)
    {
        sum[mp[a[i]]]++;
    }
    int mx = 0;
    for (auto m : sum)
        mx = max(mx, m.second);
    cout << mx;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}