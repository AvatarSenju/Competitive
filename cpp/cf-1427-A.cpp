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
    vector<int> p;
    vector<int> s;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] > 0)
            p.push_back(a[i]);
        else
            s.push_back(a[i]);
    }
    int sp = accumulate(all(p), 0);
    int sn = abs(accumulate(all(s), 0));
    if (sp == sn)
    {
        cout << "NO";
        return;
    }
    cout << "YES\n";
    if (sp < sn)
    {
        sort(all(a));

        for (auto i : a)
            cout << i << " ";
    }
    else
    {
        sort(all(a), greater<int>());
        for (auto i : a)
            cout << i << " ";
    }

    // cout << "YES\n";
    // vector<int> res;
    // sort(all(p), greater<int>());
    // sort(all(s), greater<int>());
    // for (auto i : p)
    //     res.push_back(i);
    // for (auto i : s)
    //     res.push_back(i);
    // sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += res[i];
    //     if (sum == 0)
    //     {
    //         cout << "NO";
    //         return;
    //     }
    // }
    // cout << "YES\n";
    // for (auto i : res)
    //     cout << i << " ";
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