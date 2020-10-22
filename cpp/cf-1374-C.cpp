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
    string s;
    cin >> s;
    int k = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            k++;
        else
        {
            k--;
        }
        m = min(m, k);
    }
    if (s[0] == ')' || s[n - 1] == '(')
        k = abs(m);
    else
    {
        k = abs(m) * 2;
    }

    cout << k;
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