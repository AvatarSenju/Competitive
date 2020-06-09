//return if array monotonic or not
#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 1)
        return true;

    int flag = 0;
    if (nums[0] <= nums[1])
        flag = 1;
    else if (nums[0] <= nums[1])
        flag = -1;
    for (int i = 1; i < n; i++)
    {
        if (flag == 1)
        {
            if (nums[i] < nums[i - 1])
                return false;
        }
        else
        {
            if (nums[i] > nums[i - 1])
                return false;
        }
    }
    return true;
}

int main()
{

    vector<int> nums{-1, -5, -10, 100, -100, -101, -200};
    cout << solve(nums) << "\n";
    return 0;
}