#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(vector<int> arr, int n, int sum)
{
    // The value of subset[i%2][j] will be true
    // if there exists a subset of sum j in
    // arr[0, 1, ...., i-1]
    bool subset[2][sum + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {

            // A subset with sum 0 is always possible
            if (j == 0)
                subset[i % 2][j] = true;

            // If there exists no element no sum
            // is possible
            else if (i == 0)
                subset[i % 2][j] = false;
            else if (arr[i - 1] <= j)
                subset[i % 2][j] = subset[(i + 1) % 2]
                                         [j - arr[i - 1]] ||
                                   subset[(i + 1) % 2][j];
            else
                subset[i % 2][j] = subset[(i + 1) % 2][j];
        }
    }

    return subset[n % 2][sum];
}

// wrong solution need 2 rows
bool isSum(vector<int> ar, int k)
{
    int n = ar.size();
    vector<int> dp(k + 1, 0);
    dp[0] = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
        for (int j = 0; j <= k; j++)
        {
            if (j > sum)
                break;
            if (dp[j] == 0 && j >= ar[i])
            {
                dp[j] = dp[j - ar[i]];
            }
        }
    }
    return dp[k];
}

int main()
{

    vector<int> ar{5, 3, 2, 7, 10};
    cout << isSum(ar, 11) << "\n";
    cout << isSubsetSum(ar, 5, 11) << "\n";
    return 0;
}