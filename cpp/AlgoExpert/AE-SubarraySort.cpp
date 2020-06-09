#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &a)
{
    // vector<int> res;
    int n = a.size();
    int left = 1, right = n - 1;

    while (left < n)
    {
        if (a[left] < a[left - 1])
            break;
        left++;
    }
    while (right > 0)
    {
        if (a[right] < a[right - 1])
            break;
        right--;
    }
    if (right < left)
        return {-1, -1};

    int mia = INT_MAX, mxa = INT_MIN;
    // cout << left << " " << right << "\n";
    for (int i = left; i <= right; i++)
    {
        cout << a[i] << " ";
        mia = min(mia, a[i]);
        mxa = max(mxa, a[i]);
    }

    while (left > 0 && mia < a[left - 1])
    {
        left--;
    }
    // left--;
    while (right < n - 1 && mxa > a[right + 1])
        right++;
    cout << "\n";

    // for(int )

    return {left, right};
}

int main()
{
    vector<int> nums{1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19};
    vector<int> res = solve(nums);
    for (auto i : res)
        cout << i << " ";
    cout << "\n";

    return 0;
}