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
    int n, p;
    cin >> n >> p;
    vector<vector<int>> res(n, vector<int>(n, 0));
    cout << 1 << " " << 1 << " " << 1 << " " << n << " " << n << endl;
    int t = 0;
    cin >> t;
    for (int i = 0; i < n; i++)
    {
        if (t <= 0)
            break;
        int cur = 0;
        cout << 1 << " " << i + 1 << " " << 1 << " " << i + 1 << " " << n << endl;
        cin >> cur;
        int j = 0;
        while (cur > 0)
        {
            int s = 0;
            cout << 1 << " " << i + 1 << " " << j + 1 << " " << i + 1 << " " << j + 1 << endl;
            cin >> s;
            if (s == 1)
            {
                res[i][j] = 1;
                cur--;
            }
            j++;
        }
    }

    cout << 2 << endl;
    for (auto i : res)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
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