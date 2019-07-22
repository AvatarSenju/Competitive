#include <bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return a > b ? a : b;
}

void findLCS(string a, string b)
{
    string res = "";
    int n = a.length();
    int m = b.length();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 0; i <= m; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i] == b[j])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int i = n, j = m;
    while (i >= 0)
    {
        while (j >= 0)
        {
            int up = dp[i - 1][j];
            int left = dp[i][j - 1];
            if (dp[i][j] > up && dp[i][j] > left)
            {
                res = a[i - 1] + res;
                i--;
                j--;
            }
            else if (dp[i][j] == up)
                i--;
            else
                j--;
        }
    }
    cout << res;
    cout << "\nlength of LCS " << dp[n][m] << endl;
}

int main()
{
    findLCS("hello", "helo");
    return 0;
}