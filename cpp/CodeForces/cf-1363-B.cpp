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
    string s;
    cin >> s;
    int n = s.length();
    if (n < 3)
    {
        cout << 0;
        return;
    }
    int a = 0, b = 0;
    for (char c : s)
        if (c == '1')
            a++;
        else
        {
            b++;
        }

    if (s[0] != s[n - 1])
    {
        b--;
        a--;
    }

    if (a == 0)
    {
        cout << 0;
        return;
    }
    else if (a == 1)
    {
        if (s[0] == '1' || s[n - 1] == '1')
        {
            cout << 0;
            return;
        }
    }

    if (b == 0)
    {
        cout << 0;
        return;
    }
    else if (b == 1)
    {
        if (s[0] == '0' || s[n - 1] == '0')
        {
            cout << 0;
            return;
        }
    }

    cout << min(a, b);
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