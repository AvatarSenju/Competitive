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
    int n, m;
    cin >> n >> m;
    vector<ull> a(m, 0);
    vector<ull> b(m, 0);
    int ind = 0, ma = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        cin >> b[i];
        if (b[i] > ma && a[i] > a[ind])
        {
            // if ()
            ind = i;
            ma = b[i];
        }
    }
    if (n == 1)
    {
        cout << *max_element(all(a));
        return;
    }

    if (n == 2)
    {
        vector<ull> t(m, 0);
        for (int i = 0; i < m; i++)
            t[i] = a[i] + b[i];
        sort(all(a));
        sort(all(t));
        int k = t[m - 1];
        int l = 0;
        if (m >= 2)
            l = a[m - 1] + a[m - 2];
        k = max(k, l);
        cout << k;
        return;
    }
    int k = a[ind] + b[ind];

    int l = a[ind];
    sort(all(a));
    int i = m - 1, j = m - 1;
    ull sum = 0;

    while (n > 0 && a[i] > k && i >= 0)
    {
        sum += a[i];
        i--;
        n--;
    }
    if (n >= 1)
        sum += l;
    n--;
    auto p = find(all(a), l);
    a.erase(p);
    sort(all(a));
    i = m - 2;
    while (n > 0 && a[i] > b[ind] && i >= 0)
    {
        sum += a[i];
        i--;
        n--;
    }
    while (n--)
        sum += b[ind];

    // while (n > 0 && i >= 0)
    // {
    //     if (a[i] > k)
    //     {
    //         sum += a[i];
    //         i--;
    //     }
    //     else
    //     {
    //         sum += b[m - 1];
    //     }
    //     n--;
    // }
    cout << sum;
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