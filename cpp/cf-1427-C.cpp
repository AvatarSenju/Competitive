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
    int r, n;
    cin >> r >> n;
    vector<vector<int>> a(n + 1, vector<int>(3, 0));
    a[0] = {0, 1, 1};
    vector<int> maxtill(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }
    int x = 1, y = 1;
    int p = 0, t = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (maxtill[i] >= maxtill[j] + 1)
                continue;
            int dist = abs(a[i][1] - a[j][1]) + abs(a[i][2] - a[j][2]);
            int t = a[j][0];
            if (t + dist < a[i][0])
            {
                maxtill[i] = max(maxtill[i], maxtill[j] + 1);
            }
        }
        // int dist = abs(a[i][1] - x) + abs(a[i][2] - y);
        // if (t + dist <= a[i][0])
        // {
        //     p++;
        //     x = a[i][1];
        //     y = a[i][2];
        //     t = a[i][0];
        // }
    }
    cout << maxtill[n];
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}