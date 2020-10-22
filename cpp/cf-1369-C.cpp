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
    vector<ll> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> w(k, 0);
    for (int i = 0; i < k; i++)
    {
        cin >> w[i];
    }
    sort(all(w));
    sort(all(a));
    ll sum = 0;
    ll l = 0, r = n - 1;
    ll temp = n - 1;
    vector<vector<int>> s(k);
    // priority_queue<ll> pq;
    // for
    for (int i = 0; i < k; i++)
    {
        s[i].push_back(a[temp--]);
        w[i]--;
    }
    for (int i = 0; i < k; i++)
    {
        if (w[i] == 1)
        {
            s[i].push_back(a[temp--]);
            w[i]--;
        }
    }

    int i = 0;
    while (temp >= 0)
    {
        while (w[i] > 0)
        {
            s[i].push_back(a[temp--]);
            w[i]--;
        }
        i++;
        // for (int i = 0; i < k; i++)
        // {
        //     if (w[i] > 0)
        //     {
        //         s[i].push_back(a[temp]);
        //         w[i]--;
        //         temp--;
        //     }
        // }
    }
    for (auto r : s)
    {

        sum += (*max_element(all(r)) + *min_element(all(r)));
    }
    cout << sum;
    return;

    // for (int i = 0; i < k; i++)

    //     while (temp--)
    //     {
    //     }
    // for (int i = 0; i < k; i++)
    // {
    //     // sum = sum + a[j] + a[j - w[i] + 1];
    //     // j = j - w[i];
    //     if(w[i]==1)
    //     {
    //         sum+=a[r]+a[r];
    //         r--;
    //         continue;
    //     }
    //     // if(a[l]+a[r]<a[r]-)

    // }
    // cout << sum;
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