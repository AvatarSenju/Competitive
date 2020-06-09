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
    vector<int> ar(n, 0);
    set<int> st;
    int flag0 = 0, xr = 0;
    for (int i = 0; i < n; i++)
    {

        cin >> ar[i];
        xr = max(xr, ar[i]);
        st.insert(ar[i]);
        if (ar[i] == 0)
            flag0 = 1;
    }

    int i;
    for (i = 1; i <= 1025; i++)
    {
        int flag = 0;
        for (auto j : ar)
        {
            int k = j ^ i;
            if (st.find(k) == st.end())
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i;
            return;
        }
    }
    cout << -1;
    return;

    // if (xr == 0)
    // {
    //     if (!flag0)
    //     {
    //         cout << -1;
    //         return;
    //     }
    //     int mn = INT_MAX;
    //     for (auto i : ar)
    //         if (i != 0)
    //             mn = min(i, mn);

    //     mn = mn != INT_MAX ? mn : 0;
    //     cout << mn;
    //     //     return;
    //     return;
    // }
    // else
    // {
    //     int mx = *max_element(ar.begin(), ar.end());
    //     if (xr <= mx)
    //         cout << xr;
    //     else
    //     {
    //         cout << -1;
    //     }
    // }
    //
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}