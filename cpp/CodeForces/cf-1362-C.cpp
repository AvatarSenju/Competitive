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

int countSetBits(ull n)
{
    // base case
    if (n == 0)
        return 0;
    else
        return 1 + countSetBits(n & (n - 1));
}

void solve()
{
    ull n;
    cin >> n;
    ull res = 0, k = n;
    // unordered_map<int, int> mp;
    // for (int i = k)
    res = 2 * n - (countSetBits(n));
    // for (ull i = 1; i <= n; i++)
    // {
    //     if (st.find(i ^ (i - 1)))
    // }
    // res = res + __builtin_popcount(i ^ (i - 1));
    cout << res;
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