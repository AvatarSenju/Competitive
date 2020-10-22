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
    string s;
    cin >> s;

    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            // vis[i]=1;
            if (i + k + 1 < n)
                vis[i + k + 1]--;
            // else
            //     vis[n - 1]++;
            if (i - k >= 0)
                vis[i - k]++;
            else
                vis[0]++;
        }
    }
    // cout << "--";
    // for (auto v : vis)
    //     cout << v << " ";
    // cout << "\n";
    // cout << "-";
    int su = 0, count = 0;
    // cout << su << " ";
    for (int i = 0; i < n; i++)
    {
        su += vis[i];
        if (su == 0)
        {
            count++;
            if (i + 1 < n)
                vis[i + 1]++;
            if (i + k + 1 < n)
                vis[i + k + 1]--;
        }
        // cout << su << " ";
    }
    cout << count;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}