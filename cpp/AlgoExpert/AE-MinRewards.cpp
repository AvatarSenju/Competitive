#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> &a)
{
    int n = a.size();
    vector<int> res(n, 1);
    res[0] = 1;
    for (int i = 1; i < n; i++)
        if (a[i] > a[i - 1])
            res[i] = res[i - 1] + 1;
    for (int j = n - 2; j >= 0; j--)
        if (a[j] > a[j + 1])
            res[j] = max(res[j], res[j + 1] + 1);
    return res;
}

int main()
{
    vector<int> nums{8, 4, 2, 1, 3, 6, 7, 9, 5};
    vector<int> res = solve(nums);
    for (auto i : res)
        cout << i << " ";
    cout << "\n";
    return 0;
}