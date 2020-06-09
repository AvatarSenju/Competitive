// find longest contiguous array with peak
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a)
{
    int ans = 0;
    int i = 1, n = a.size();
    if (n < 3)
        return 0;
    while (i < n - 1)
    {
        bool peak = a[i] > a[i + 1] && a[i] > a[i - 1];
        if (!peak)
        {
            i++;
            continue;
        }
        int left = i - 1;
        int right = i + 1;

        while (left > 0 && a[left] > a[left - 1])
        {
            left--;
        }
        while (right < n - 1 && a[right] > a[right + 1])
        {
            right++;
        }
        ans = max(ans, (right - left + 1));
        i++;
    }
    return ans;
}

int main()
{

    vector<int> nums{1, 2, 3, 3, 4, 0, 10, 6, 5, -1, -3, 2, 3};
    cout << solve(nums) << "\n";

    return 0;
}