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
    long double prod = 1;
    vector<ull> j(n, 0);
    for (int i = 0; i < n; i++)
    {
        // ll j;
        cin >> j[i];
        if (j[i] == 0)
        {
            cout << "0";
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        prod *= j[i];
        if (prod > 1000000000000000000ULL)
        {
            cout << "-1";
            return;
        }
    }

    cout << (ull)prod;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t = 0;
    solve();
    cout << "\n";

    return 0;
}