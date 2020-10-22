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
    vector<int> a(n, 0);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int m = 0, sum = 0;
    int count = 0;
    for (auto i : mp)
    {
        m = max(m, i.second);
        sum += i.second;
    }
    if (m == n || m > sum - m + 1)
    {
        cout << 0;
        return;
    }
    if (m == 1)
    {
        cout << n;
        return;
    }
    for (auto i : mp)
    {
        if (i.second == m)
        {
            count++;
            sum -= m;
        }
    }

    count = max(count - 1, 0);
    // sum -= m;

    if (m == 2)
    {
        cout << mp.size() - 1;
        return;
    }

    cout << count + (sum / (m - 1));
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