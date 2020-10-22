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
    int o = 0, e = 0;
    int f1 = 0, f0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            o++;
            f1 = 1;
        }
        else
        {
            e++;
            f0 = 1;
        }
    }
    if (f1 == 0 || f0 == 0)
    {
        cout << "NET";
        return;
    }
    if (o == e)
    {
        if (o % 2 == 0)
            cout << "NET";
        else
            cout << "DA";
        return;
    }
    int a = min(o, e);
    if (a % 2 == 0)
        cout << "NET";
    else
        cout << "DA";
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