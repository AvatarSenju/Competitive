#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &a)
{

    unordered_map<int, bool> mp;
    for (auto i : a)
        mp[i] = true;

    int ml = 0, mr = 0, md = INT_MIN;

    for (auto i : a)
    {
        if (!mp[i])
            continue;
        int l = i, r = i;
        while (mp[l - 1])
            mp[l--] = false;
        while (mp[r + 1])
            mp[r++] = false;
        if (md < (r - l))
        {
            md = r - l;
            ml = l;
            mr = r;
        }
    }
    return {ml, mr};
}

int main()
{
    vector<int> nums{13, 14, 16, 17, 11, 3, 0, 15, 5, 2, 4, 10, 7, 12, 6};
    vector<int> res = solve(nums);
    for (auto i : res)
        cout << i << " ";
    cout << "\n";

    return 0;
}