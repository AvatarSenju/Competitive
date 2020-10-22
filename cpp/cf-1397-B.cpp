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
    vector<ll> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(all(a));
    ll moves = 0;
    for (int i = 0; i < n; i++)
    {
        moves += abs(a[i] - 1);
    }
    ll ans = moves;
    for (int i = 1; i < 1e5; i++)
    {
        moves = 0;
        for (int j = 0; j < n; j++)
        {
            moves = moves + abs(a[j] - pow(i, j));
            if (moves > ans)
            {
                cout << ans;
                return;
            }
        }
        ans = min(ans, moves);
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