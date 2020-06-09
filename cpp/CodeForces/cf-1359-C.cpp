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
    float h, c, t;
    cin >> h >> c >> t;
    if (h == t)
    {
        cout << 1;
        return;
    }
    float i = 2, p = 1e7, avg = c + (h - c) / 2, cur = abs(t - avg), a = 1, pr = 1e7;
    float pht, cht, pct, cct;
    pht = pct = 1e7;
    cct = avg;
    cht = h;
    // cout << avg << " " << cur;
    while (abs(t - cct) < abs(t - pct) || abs(t - cht) < abs(t - pht))
    {
        if (cur == 0)
        {
            cout << i;
            return;
        }
        i++;

        if (a)
        {
            a = 0;
            avg = (((i - 1) * h) + avg) / i;
            cur = abs(t - avg);
            pht = cht;
            cht = avg;
        }
        else
        {
            a = 1;
            avg = (((i - 1) * c) + avg) / i;
            cur = abs(t - avg);
            pct = cct;
            cct = avg;
        }
        // pt = ct;
        // ct = avg;
        // cout << avg << "\n";
        // cout << pht << " " << cht << "\n";
        // cout << pct << " " << cct << "\n";
    }

    cout
        << i + 2;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}