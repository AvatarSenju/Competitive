// Given an array of numbers, find the maximum sum of any contiguous subarray of the array.

#include <bits/stdc++.h>
using namespace std;

int max_sub(vector<int> &nums)
{
    int i, n = nums.size();
    long long prevMax, curMax, ans;

    prevMax = curMax = ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        curMax = nums[i];
        curMax = max(curMax, nums[i] + prevMax);
        ans = max(ans, curMax);
        prevMax = curMax;
    }
    if (ans < 0)
        return 0;
    return ans;
}

int main()
{

    vector<int> vect{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // vector<int> vect{-2, 1, -3, 4};
    // vector<int> vect{-2, -5, -1};
    int res = max_sub(vect);
    cout << res << endl;

    return 0;
}