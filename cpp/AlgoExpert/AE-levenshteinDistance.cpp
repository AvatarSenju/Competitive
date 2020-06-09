#include <bits/stdc++.h>
using namespace std;

int dist(string a, string b)
{
    int n = a.length(), m = b.length();
    vector<vector<int>> dp((n + 1), vector<int>(m + 1, 0));

    for (int r = 0; r <= n; ++r)
        dp[r][0] = r;
    for (int c = 0; c <= m; ++c)
        dp[0][c] = c;

    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= m; c++)
        {
            if (a[r - 1] == b[c - 1])
                dp[r][c] = dp[r - 1][c - 1];
            else
                dp[r][c] = min({dp[r][c - 1], dp[r - 1][c - 1], dp[r - 1][c]}) + 1;
        }
    }
    return dp[n][m];
}

int main()
{

    string a = "horse";
    string b = "ros";
    cout << dist(a, b);
    return 0;
}