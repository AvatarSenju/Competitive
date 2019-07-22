// 0-1 Knapsack Problem
// provided weights and profits
// find maximum prfit for a given size of knapsack

#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<pair<int, int>> items;
    int capacity = 8;

    int arr[] = {0, 1, 6, 5, 7};
    int arr1[] = {0, 1, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Entering values in vector of pairs for items as value and pair
    for (int i = 0; i < n; i++)
        items.push_back(make_pair(arr[i], arr1[i]));

    int dp[n][capacity];

    for (int i = 0; i < capacity; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        dp[i][0] = 0;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < capacity; j++)
        {
            if (j < items[i].second)
                dp[i][j] = dp[i - 1][j];
            else
            {
                dp[i][j] = max((items[i].first + dp[i - 1][j - items[i].second]), dp[i - 1][j]);
            }
        }
    }

    cout << dp[n - 1][capacity - 1] << endl;

    return 0;
}