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
    ll res = 0;

    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0;
    for (i = 1; i < n; i++)
        if (a[i] < a[i - 1])
            break;
    if (i >= n)
    {
        cout << 0;
        return;
    }
    // int l = max_element(all(a));
    // cout << l << " ";

    int jdx = n - 1, j = n - 2;

    // for (; j > 0; j--)
    // {
    //     if (a[j] > a[j - 1] && a[j] > a[j + 1])
    //         break;
    // }
    // jdx = j;
    // ll mnj = *min_element(a.begin() + i, a.begin() + j);
    // ll mxj = *max_element(a.begin() + i, a.begin() + j);

    // res=min()
    int mxi = a[i - 1];
    int idx = i - 1;
    int id = i - 1;
    int peak = id;
    for (int j = id + 1; j < n - 1; j++)
    {
        if (a[j] > a[j - 1] && a[j] > a[j + 1])
        {
            if (a[j] > a[peak])
                peak = j;
        }
    }
    ll cur = 0;
    if (peak == id)
    {
        ll mn = *min_element(a.begin() + id, a.end());
        cout << a[peak] - mn;
        return;
    }
    int mxp = peak;
    for (int k = id; k <= peak; k++)
    {
        if (a[k] > a[mxp])
        {
            mxp = k;
        }
    }

    ll mn = *min_element(a.begin() + mxp, a.end());
    ll mx = *max_element(a.begin() + id, a.begin() + peak + 1);
    cur = mx - mn;

    res = cur;
    mn = *min_element(a.begin() + id, a.begin() + mxp);
    // res = a[peak] - mn;
    res += (a[id] - mn);
    // res += (a[peak] - mn);
    ll count = 0;
    // res = INT_MAX;

    // for (; i < n - 1; i++)
    // {
    //     if (a[i] >= mxi)
    //     {
    //         mxi = a[i];
    //         idx = i;
    //     }
    // }
    // mn = *min_element(a.begin() + id, a.begin() + idx);
    // count += (mxi - mn);
    // mn = *min_element(a.begin() + idx + 1, a.end());
    // count += (mxi - mn);
    mn = *min_element(a.begin() + id, a.end());
    // res = min(res, count);
    // res = min(res, (mxi - mn));
    mx = *max_element(all(a));

    // res = min(res, (mx - mn));

    count = 0;
    int flag = 1;
    mxi = a[id];
    idx = id;
    int temp = *min_element(a.begin() + id, a.end());
    ll ans = INT_MAX;
    // if (temp < a[peak])
    // {
    //     temp = a[peak] - temp;
    //     ans = temp;
    // }
    for (i = id + 1; i < n; i++)
    {
        if (a[i] >= mxi)
        {
            if (flag == 1)
            {
                int mn = *min_element(a.begin() + idx, a.begin() + i);

                if (count > res)
                    break;
                // count =count+min( (mxi - mn),;
                count += (mxi - mn);
                int temp = *min_element(a.begin() + i, a.end());

                temp = mx - temp;
                ans = min(ans, count + temp);

                mxi = a[i];
                idx = i;
                flag = 0;
            }
            else
            {
                mxi = a[i];
                idx = i;
            }
        }
        else
            flag = 1;
    }
    if (idx < n)
    {
        int mn = *min_element(a.begin() + idx, a.end());
        count += (mxi - mn);
    }
    res = min({res, count, ans});
    cout << res;

    // int mx = *max_element(all(a));

    // cout << mx << " " << mn << " " << mx - mn;
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