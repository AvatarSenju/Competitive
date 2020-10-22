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
    ull k;
    cin >> k;
    string s = "codeforces";
    if (k == 1)
    {
        cout << s;
        return;
    }
    if (k == 2)
    {
        cout << "codeforcess";
        return;
    }
    // k--;
    vector<ull> ar(10, 1);
    ull l = ceil(log2(k));
    // cout << l << "\n";
    if (l <= 10)
    {
        for (int i = 10 - l; i < 10; i++)
            ar[i] = 2;
    }
    if (l > 10)
    {
        for (int i = 1; i < 10; i++)
            ar[i] = 2;
        k -= 1024;
        ull x = ceil(k / 512.0);
        ar[0] = x + 2;
    }
    for (int i = 0; i < 10; i++)
        for (ull j = 1; j <= ar[i]; j++)
            cout << s[i];
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