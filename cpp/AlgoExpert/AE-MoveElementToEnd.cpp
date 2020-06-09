//move all elements that are target to end
#include <bits/stdc++.h>
using namespace std;

//can move all elements that are not k to fron using two points i and j O(N)
void solve(vector<int> &nums, int k)
{

    int i = 0, j = 0, n = nums.size();
    while (j < n)
    {
        if (nums[j] != k)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
        }
        j++;
    }
}

int main()
{
    int k = 2;
    vector<int> nums{2, 1, 2, 2, 2, 3, 4, 2, 2};
    for (auto i : nums)
        cout << i << " ";
    cout << "\n";
    solve(nums, k);
    for (auto i : nums)
        cout << i << " ";
    cout << "\n";
}