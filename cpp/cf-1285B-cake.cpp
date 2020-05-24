#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll max_sub(vector<ll> &nums)
{
    ll i, n = nums.size();
    long long prevMax, curMax, ans;

    prevMax = curMax = ans = LONG_MIN;

    for (i = 0; i < n - 1; i++)
    {
        curMax = nums[i];
        curMax = max(curMax, nums[i] + prevMax);
        ans = max(ans, curMax);
        prevMax = curMax;
    }
    prevMax = curMax = LONG_MIN;
    for (i = 1; i < n; i++)
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
    int t = 0;
    cin >> t;
    while (t--)
    {
        ll n = 0;
        cin >> n;
        vector<ll> num(n, 0);
        ll sum = 0, hap = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
            sum += num[i];
        }
        hap = max_sub(num);
        if (hap < sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}