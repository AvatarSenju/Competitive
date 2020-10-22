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

void solve2()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]].push_back(i);
    }
    // for (auto i : mp)
    // {
    //     cout << i.first << "--";
    //     for (auto j : i.second)
    //         cout << j << " ";
    //     cout << "\n";
    // }
    ll count = 0;
    for (auto i : mp)
    {
        int k = i.first;
        if (mp[k].size() < 2)
            continue;
        int l = mp[k].size();
        for (int j = 0; j < l; j++)
        {
            for (int q = 1; q < l; q++)
            {
                for (auto o : mp)
                {
                    int h = o.first;
                    if (mp[h].size() < 2)
                        continue;
                    sort(all(mp[h]));
                    auto u = upper_bound(all(mp[h]), mp[k][j]);
                    auto l = lower_bound(all(mp[h]), mp[k][q]);
                    if (u < l)
                        count += (l - u);
                }
            }
        }
    }
    cout << count;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (a[i] == a[k])
            {
                for (int j = i + 1; j < k; j++)
                {
                    for (int l = k + 1; l < n; l++)
                    {
                        if (a[j] == a[l])
                            count++;
                    }
                }
            }
        }
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
        solve2();
        cout << "\n";
    }

    return 0;
}