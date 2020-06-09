//gcd split array
#include <bits/stdc++.h>
using namespace std;

int minSplit(vector<int> &nums)
{
    int n = nums.size();
    vector<int> dp(n + 1, 0);

    for (int i = n - 1; i >= 0; i--)
    {
        dp[i] = 1 + dp[i + 1];
        for (int j = i + 1; j < n; j++)
        {
            if (__gcd(nums[i], nums[j]) > 1)
            {
                dp[i] = min(dp[i], 1 + dp[j + 1]);
            }
        }
    }
    return dp[0];
}

int main()
{

    vector<int> nums{3, 5, 1, 7, 8, 20, 14, 18, 22, 361};
    cout << minSplit(nums) << "\n";
    return 0;
}