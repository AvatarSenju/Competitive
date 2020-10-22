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

int max_sub(vector<int> &nums)
{
    int i, n = nums.size();
    long long prevMax, curMax, ans;

    prevMax = curMax = ans = INT_MIN;

    for (int i = 0; i < n; i++)
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

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n, 0);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
        if (i % 2 == 0)
            sum += a[i];
    }
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n - 1; i += 2)
    {
        b.push_back(a[i + 1] - a[i]);
    }
    for (int i = 1; i < n - 1; i += 2)
    {
        c.push_back(a[i] - a[i + 1]);
    }

    int h = max(max_sub(b), max_sub(c));

    for (int i = 0; i < n - 1; i++)
    {
        int curM = 0;
        if (i % 2 == 0)
            curM = a[i + 1] - a[i];
        else
        {
            curM = a[i] - a[i + 1];
        }

        int l = i - 1, r = i + 2;
        if (l >= 0 && r < n)
        {
            if (i % 2 == 0)
            {
                int temp = curM + (a[l] - a[r]);
                curM = max(curM, temp);
            }
            else
            {
                int temp = curM + (a[r] - a[l]);
                curM = max(curM, temp);
            }
        }
        h = max(h, curM);
    }

    cout << sum + h;
}

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