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

int check(int d, int n)
{
    for (int i = 1; i <= d; i++)
    {
        if (d % i == 0 && d / i <= n)
            return i;
    }
}

int fact(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            return i;
    }
}

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    if (n == 2)
    {
        cout << x << " " << y;
        return;
    }
    n -= 1;
    int d = y - x;
    // if (d % n == 0)
    // {
    //     d = d / n;
    //     cout << x << " ";
    //     for (int i = 1; i < n; i++)
    //     {
    //         cout << x + d << " ";
    //         x = d + x;
    //     }
    //     cout << y;
    //     return;
    // }
    // else
    // {
    int k = check(d, n);
    int c = n + 1;
    vector<int> a;
    for (int i = x; i <= y; i += k)
    {
        // cout<<i<<" ";
        a.push_back(i);
        c--;
    }
    if (c > 0)
    {
        for (int i = x - k; i >= 1; i -= k)
        {
            a.push_back(i);
            c--;
        }
    }
    if (c > 0)
    {
        int i = y + k;
        while (c > 0)
        {
            a.push_back(i);
            i += k;
            c--;
        }
    }
    // sort(all(a));
    for (auto i : a)
        cout << i << " ";
    // }
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