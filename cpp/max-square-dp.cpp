#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<int>> &mat)
{
    int h = mat.size();
    int w = mat[0].size();
    vector<vector<int>> dp(h + 1, vector<int>(w + 1, 0));
    int res = 0;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (mat[i - 1][j - 1])
                dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            res = max(res, dp[i][j]);
        }
    }
    for (auto i : dp)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }
    return res;
}

int main()
{

    vector<vector<int>> mat = {
        {1, 1, 1, 0},
        {1, 1, 1, 0},
        {1, 1, 1, 0},
        {1, 1, 1, 0},
    };
    cout << solve(mat) << "\n";
    return 0;
}