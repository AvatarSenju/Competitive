#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<int> &a, int k)
{
    unordered_map<int, vector<pair<int, int>>> mp;
    vector<int> arr;
    vector<vector<int>> res;
    int n = a.size();
    if (n < 4)
        return {};
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = a[i] + a[j];
            if (mp.find(k - sum) != mp.end())
            {
                for (auto f : mp[k - sum])
                    res.push_back({f.first, f.second, a[i], a[j]});
            }

            // arr.push_back(sum);
            // mp[sum].push_back(make_pair(a[i], a[j]));
        }
        for (int j = 0; j < i; j++)
            mp[a[i] + a[j]].push_back(make_pair(a[i], a[j]));
    }

    // int l = arr.size();
    // for (int i = 0; i < l; i++)
    // {
    //     int t = k - arr[i];
    //     if (mp.find(t) != mp.end())
    //     {
    //         for (auto f : mp[t])
    //             for (auto s : mp[arr[i]])
    //                 if (f != s)
    //                     res.push_back({f.first, f.second, s.first, s.second});
    //         // if(t!=a[i])
    //         // {

    //         // }
    //     }
    // }
    return res;
}

int main()
{

    int k = 16;
    vector<int> nums{7, 6, 4, -1, 1, 2};
    vector<vector<int>> res = solve(nums, k);
    for (auto i : res)
        cout << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << "\n";

    return 0;
}