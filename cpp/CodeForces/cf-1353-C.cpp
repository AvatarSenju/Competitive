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
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;

    ll mxn = 5e5, a = 2;
    vector<ll> ar(mxn, 0);
    for (ll i = 1; i < mxn; i++)
    {
        ar[i] = ar[i - 1] + (pow(a, 2)) * 2;
        a += 2;
    }

    while (t--)
    {
        // solve();
        int n = 0;
        cin >> n;
        n /= 2;
        cout << ar[n];
        cout << "\n";
    }

    return 0;
}