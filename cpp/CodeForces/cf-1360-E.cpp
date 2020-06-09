#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n = 0;
    cin >> n;
    vector<vector<int>> ar(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            ar[i][j] = c - 48;
        }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i][j] == 1 && i < n - 1 && j < n - 1)
            {
                if (ar[i + 1][j] == 0 && ar[i][j + 1] == 0)
                {
                    cout << "NO";
                    return;
                }
            }
        }
    }
    cout << "YES";
    return;
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