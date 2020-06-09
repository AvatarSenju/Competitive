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
    int n, k;
    cin >> n >> k;
    ll sum = 0;
    // vector<int>ar(n,0);
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        cin >> j;
        if (j > k)
            sum = sum + (j - k);
    }
    cout << sum;
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