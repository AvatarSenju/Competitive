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
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> v(a);
    sort(all(v));
    int i = n - 1;
    ull count = 0;
    for (; i >= 0; i--)
        if (a[i] != v[i])
            break;
    int k = 0;
    for (; k < n; k++)
        if (a[k] != v[k])
            break;

    if (i <= 0)
    {
        cout << 0;
        return;
    }
    int cur = 0;
    for (int j = k; j <= i; j++)
    {
        if (a[j] == v[j])
            cur = 1;

        else
        {
            count += cur;
            cur = 0;
        }
    }
    count += cur;
    if (count == 0 && i != k)
    {
        cout << 1;
        return;
    }
    if (count == 1)
        cout << 2;
    else if (count == 2)
        cout << 3;
    else
    {
        cout << count;
    }

    // cout << count * 2;
    // if (a[j] == v[j])
    //     count++;
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