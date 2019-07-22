// Given an N by K matrix where the nth row and kth column represents the cost to build the nth house with kth color, return the minimum cost which achieves this goal.

//Trying base case if n=0 return min of all k

// try an array with values correspoind to k that is the minimum value without that color

#include <bits/stdc++.h>
using namespace std;

// static int min_cost=0;

int min_cost(vector<vector<int>> mat, int n, int k)
{
    int ans = INT_MAX;
    int size = mat[n].size();
    for (int i = 0; i < size; i++)
    {
        if (i != k)
            ans = min(ans, mat[n][i]);
    }
    return ans;
}

// int color(vector<vector<int>> mat, int n, int N, int k, int K)
// {

//     if (n == 1)
//         return 0;

//     for (int i = 0; i < n; i++)
//     {
//     }
// }

int main()
{

    int n = 4, k = 4;

    int mat[n][k] = {{1, 2, 3, 4}, {1, 2, 1, 0}, {6, 1, 1, 5}, {2, 3, 5, 5}};
    // int mat[n][k] = {{4, 4, 4, 4}, {4, 4, 4, 4}, {4, 4, 4, 4}, {4, 4, 4, 4}};

    vector<vector<int>> dp;
    dp.resize(n + 1, std::vector<int>(k, 0));

    // for (int i = 0; i < k; i++)
    // {
    //     dp[0].push_back(0);
    // }
    /* code */
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            dp[i][j] = mat[i - 1][j] + min_cost(dp, i - 1, j);
        }
    }

    int ans = min_cost(dp, n, 0);
    ans = min(ans, dp[n][0]);

    cout << ans << endl;

    return 0;
}