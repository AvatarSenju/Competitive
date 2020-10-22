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
    if (n == 1)
        cout << 7 << "\n";
    else
    {
        int k = n - 1;
        cout << (7 + (k * 3)) << "\n";
    }
    vector<pair<int, int>> ar;
    ar.push_back({0, 0});
    ar.push_back({0, 1});
    ar.push_back({1, 0});
    ar.push_back({1, 1});
    int a = 1, b = 2;
    for (int i = 1; i <= n; i++)
    {
        ar.push_back({a, b});
        ar.push_back({b, a});
        ar.push_back({b, b});
        a++;
        b++;
    }
    for (auto i : ar)
        cout << i.first << " " << i.second << "\n";
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