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

int solve()
{
    int n;
    cin >> n;
    // vector<vector<int>>(n, vector<int>(n, 0));
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (mp.find(i - j) != mp.end())
                mp[i - j] += x;
            else
                mp[i - j] = x;
        }
    }
    int res = 0;
    for (auto i : mp)
    {
        res = max(res, i.second);
    }
    return res;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int res = solve();
        cout << "Case  #" << i << ": " << res << "\n";
    }

    return 0;
}