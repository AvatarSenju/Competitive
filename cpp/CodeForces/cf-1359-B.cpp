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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    bool f = y > (2 * x) ? true : false;
    int sum = 0;
    // cout << n << m << x << y;

    // vector<vector<string>> ar(n, vector<char>(m));
    vector<string> ar(n);
    for (int i = 0; i < n; ++i)
    {
        string temp = "";
        while (temp.length() <= 0)
            cin >> temp;
        ar[i] = temp;
    }
    // for (auto s : ar)
    //     cout << s << "\n";

    if (f)
    {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (ar[i][j] == '.')
                    sum += x;
        cout << sum;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == '.')
            {
                if (j < m - 1 && ar[i][j + 1] == '.')
                {
                    sum += y;
                    j++;
                }
                else
                {
                    sum += x;
                }
            }
        }
    }
    cout << sum;
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