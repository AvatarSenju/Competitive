#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> nums, int k)
{
    //O(NlogN)

    sort(nums.begin(), nums.end());
    int n = nums.size();
    if (n < 2)
        return {};
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int sum = nums[l] + nums[r];
        if (sum == k)
            return {nums[l], nums[r]};
        if (sum > k)
            r--;
        else
            l++;
    }
    return {};
}

vector<int> solve1(vector<int> nums, int k)
{
    //O(N)
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
        mp[k - nums[i]] = i;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) != mp.end() && mp[nums[i]] != i)
        {
            if (nums[i] < (k - nums[i]))
                return {nums[i], k - nums[i]};
            else
            {
                return {k - nums[i], nums[i]};
            }

            // return i < (k - i) ? ({i, k - i}) : ({k - i, i});
        }
    }
    return {};
}

int main()
{
    vector<int> nums{3, 5, -4, 8, 11, 1, -1, 6};
    int k = 10;
    vector<int> res = solve(nums, k);
    for (auto v : res)
        cout << v << " ";
    vector<int> res1 = solve1(nums, k);
    for (auto v : res1)
        cout << v << " ";

    return 0;
}