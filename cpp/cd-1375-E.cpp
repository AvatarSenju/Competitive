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

void countInv(vector<ll> &a, vector<pair<int, int>> &inv)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (a[i] > a[j])
                inv.push_back(make_pair(i + 1, j + 1));
        }
    }
}
bool check(vector<ll> &a, vector<pair<int, int>> &inv)
{
    int n = a.size();
    for (auto i : inv)
    {
        ll temp = a[i.first - 1];
        a[i.first - 1] = a[i.second - 1];
        a[i.second - 1] = temp;
    }
    bool ok = true;
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            ok = false;
    return ok;
}

void solve()
{
    int n = 0;
    cin >> n;
    vector<ll> arr(n, 0);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<pair<int, int>> res;
    countInv(arr, res);
    if (check(arr, res))
    {
        cout << res.size() << endl;
        for (auto i : res)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
    else
    {
        cout << -1;
    }

    // selectionSort(arr, res);
    // // int inv_count = 0;
    // for (int i = 0; i < n - 1; i++)
    //     for (int j = n - 1; j > i; j--)
    //         if (arr[i] > arr[j])
    //             res.push_back(make_pair(i + 1, j + 1));

    // cout << res.size() << endl;
    // for (auto i : res)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}