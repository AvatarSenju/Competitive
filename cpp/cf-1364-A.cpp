#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i, a, b) for (i = a; i < b; i++)
#define repr(i, a, b) for (i = a; i >= b; i--)
#define F first
#define S second
#define p_b push_back
#define m_p make_pair
#define all(a) (a).begin(), (a).end()

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    arr[0] = 0;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // if (k == 1)
    // {
    //     cout << -1;
    //     return;
    // }
    int flag = 0;
    // unodered map 'um' implemented as
    // hash table
    unordered_map<int, int> um;

    // 'mod_arr[i]' stores (sum[0..i] % k)
    int mod_arr[n], max = 0;
    int curr_sum = 0;

    // traverse arr[] and build up the
    // array 'mod_arr[]'
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];

        // as the sum can be negative, taking modulo twice
        mod_arr[i] = ((curr_sum % k) + k) % k;
    }

    for (int i = 0; i < n; i++)
    {
        // if true then sum(0..i) is divisible
        // by k
        if (mod_arr[i] != 0)
        // update 'max'
        {
            max = i + 1;
            flag = 1;
        }

        // if value 'mod_arr[i]' not present in 'um'
        // then store it in 'um' with index of its
        // first occurrence
        else if (um.find(mod_arr[i]) == um.end())
            um[mod_arr[i]] = i;

        else
            // if true, then update 'max'
            if (max < (i - um[mod_arr[i]]))
            max = i - um[mod_arr[i]];
    }
    if (mod_arr[n - 1] == 0 && flag != 0)
    {
        int k = 0;
        for (; k < n; k++)
            if (mod_arr[k] != 0)
                break;
        max = n - k - 1;
    }

    // max--;
    if (flag == 0)
    {
        cout << -1;
        return;
    }
    cout << max;
}

// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> nums(n, 0);
//     for (int i = 0; i < n; i++)
//         cin >> nums[i];

//     // // sort(all(nums));
//     int i;
//     // // long long prevMax, curMax, ans;

//     // // prevMax = curMax = ans = INT_MIN;

//     // // for (int i = 0; i < n; i++)
//     // // {
//     // //     curMax = nums[i];
//     // //     curMax = max(curMax, nums[i] + prevMax);
//     // //     ans = max(ans, curMax);
//     // //     prevMax = curMax;
//     // // }
//     // // if (ans < 0)
//     // // {
//     // //     cout << (-1);
//     // //     return;
//     // // }
//     vector<int> pre(n + 1, 0);
//     rep(i, 0, n)
//     {
//         pre[i + 1] = pre[i] + nums[i];
//     }
//     // cout << "\n";
//     // for (auto v : pre)
//     //     cout << v << " ";
//     // cout << "\n";
//     int ans = -1;
//     for (int i = 0; i < n + 1; i++)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             if ((pre[j] - pre[i]) % k != 0 && j - i > ans)
//                 ans = j - i;
//         }
//     }

//     //     // int i=0,j=0,ans=-1;
//     //     // for(int i=0)

//     //     // int i, n = nums.size();
//     //     long long prevMax, curMax, ans, maxInd = -1;

//     //     prevMax = curMax = ans = INT_MIN;

//     //     for (int i = 0; i < n; i++)
//     //     {
//     //         curMax = nums[i];
//     //         if (curMax > nums[i] + prevMax)
//     //         {

//     //         }
//     //         curMax = max(curMax, nums[i] + prevMax);
//     //         ans = max(ans, curMax);
//     //         prevMax = curMax;
//     //     }
//     //     // if (ans < 0)
//     //     // {
//     //     //     cout << (-1);
//     //     //     return;
//     //     // }
//     cout << ans;
// }

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}