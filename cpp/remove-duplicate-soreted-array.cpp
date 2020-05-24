#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    if (nums.size() <= 0)
        return 0;
    int n = nums.size();

    if (n == 1)
        return 1;
    int prev = nums[0], i = 1, j = 1;
    while (j < n && i < n)
    {
        if (nums[i] == prev)
        {
            if (nums[j] == nums[i])
                j++;
            else
            {
                nums[i] = nums[j];
                prev = nums[j];
                i++;
                j++;
            }
        }
        if (nums[i] < prev)
        {
            nums[i] = prev;
        }
        else
        {
            prev = nums[i];
        }
    }
    return i;
}

int main()
{

    vector<int> nums{1, 2, 2};
    cout << removeDuplicates(nums) << endl;
}