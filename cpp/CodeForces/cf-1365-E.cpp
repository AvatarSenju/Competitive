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

    ull s = 0;
    int i = 0;
    vector<ull> ar(n, 0);
    rep(i, 0, n)
            cin >>
        ar[i];

    ull ans = 0;
    for (int k = 0; k < n; k++)
        for (int j = 0; j < n; j++)
            for (int i = 0; i < n; i++)
            {
                ans = max(ans, (ar[i] | ar[j] | ar[k]));
            }

    cout << ans;
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