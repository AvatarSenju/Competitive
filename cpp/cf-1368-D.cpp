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
    vector<ll> ar(n, 0);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n - 1; i++)
    {
        ll a = ar[i];
        ll b = ar[i + 1];
        ll x = a & b;
        ll y = a | b;
        if ((x * x + y * y) >= (a * a + b * b))
        {
            ar[i + 1] = y;
            ar[i] = x;
        }
    }
    ull sum = 0;
    for (auto i : ar)
        sum += (i * i);
    cout << sum;

    // cout << (x * x + y * y);
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