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

bool backtrack(vector<int> &a, vector<bool> &vis, vector<vector<int>> &res, vector<int> &cur, ll target, ll sum, int i, int n)
{
    if (target == sum)
    {
        res.push_back(cur);
        cur.clear();
        return true;
    }

    if (i >= n)
        return false;

    if (sum > target)
        return false;

    for (int k = i; k < n; k++)
    {
        if (!vis[k])
        {
            vis[k] = true;
            cur.push_back(a[k]);
            if (!backtrack(a, vis, res, cur, target, sum + a[k], k + 1, n))
            {
                cur.pop_back();
                vis[k] = false;
            }
            else
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    int k;
    cin >> k;
    vector<int> a;
    for (int i = 0; i < k; i++)
    {
        int l;
        cin >> l;
        for (int j = 0; j < l; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
    }

    sort(all(a));
    int n = a.size();
    vector<vector<int>> res;
    vector<int> cur;
    vector<bool> vis(n, false);
    int target = accumulate(all(a), 0) / k;
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (!vis[i])
            backtrack(a, vis, res, cur, target, sum, 0, n);

    for (auto i : res)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
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