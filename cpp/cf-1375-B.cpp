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
    int m, n;
    cin >> n >> m;
    int ok = 1;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] > 4)
                ok = 0;
            if (((i == 0 && j == 0) || (i == 0 && j == m - 1) || (i == n - 1 && j == 0) || (i == n - 1 && j == m - 1)) && a[i][j] > 2)
                ok = 0;
            if ((i == 0 || j == 0 || j == m - 1 || i == n - 1) && a[i][j] > 3)
                ok = 0;
        }
    if (ok == 0)
    {
        cout << "NO";
        return;
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if ((i == 0 && j == 0) || (i == 0 && j == m - 1) || (i == n - 1 && j == 0) || (i == n - 1 && j == m - 1))
                cout << 2 << " ";
            else if (i == 0 || j == 0 || j == m - 1 || i == n - 1)
                cout << 3 << " ";
            else
                cout << 4 << " ";
        }
        cout << endl;
    }
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