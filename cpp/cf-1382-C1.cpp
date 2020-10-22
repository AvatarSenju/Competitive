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

void change(string &s, int l, int r)
{

    for (int i = l; i <= r; i++)
    {
        if (s[i] == '0')
            s[i] = '1';
        else
            s[i] = '0';
    }
    reverse(s.begin() + l, s.begin() + r + 1);
}

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a;
    cin >> b;
    if (n == 1)
    {
        if (a[0] != b[0])
            cout << 1 << " " << 1;
        else
        {
            cout << 0;
        }
        return;
    }
    vector<int> res;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == b[i])
            continue;
        if (a[0] == b[i])
        {
            res.push_back(1);
            if (a[0] == '0')
                a[0] = '1';
            else
                a[0] = '0';
            res.push_back(i + 1);
            change(a, 0, i);
            // a[0] = b[i];
        }
        else
        {
            res.push_back(i + 1);
            change(a, 0, i);
        }
        if (i > 1)
        {

            // if (a[i-1])
        }
    }
    if (res.size() <= 0)
    {
        cout << 0;
        return;
    }
    cout << res.size() << "\n";
    for (auto i : res)
        cout << i << " ";
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