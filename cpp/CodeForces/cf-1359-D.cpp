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
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    // int i, n = nums.size();
    long long prevMax, curMax, ans, mxn;

    prevMax = curMax = ans = mxn = 0;

    for (int i = 0; i < n; i++)
    {

        curMax = nums[i];
        if (curMax > mxn)
            mxn = curMax;
        curMax = max(curMax, nums[i] + prevMax);
        ans = max(ans, curMax - mxn);
        prevMax = curMax;
    }
    cout << ans;

    // if (ans < 0)
    //     return 0;
    // return ans;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t = 0;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    //     cout << "\n";
    // }
    solve();
    cout << "\n";
    return 0;
}
