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
    vector<int> a;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (c == 0)
                continue;
            else
            {
                a.push_back(c);
                c = 0;
            }
        }
        else
        {
            c++;
        }
    }
    if (c > 0)
        a.push_back(c);
    sort(all(a));
    int sum = 0;
    int k = a.size();
    for (int i = k - 1; i >= 0; i -= 2)
        sum += a[i];
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