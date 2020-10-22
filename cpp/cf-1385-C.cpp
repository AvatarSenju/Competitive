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

    int up = 0, down = 0, i = n - 2, flag = 0;
    // if(a[n-1]>a[n-2])
    //     flag=-1;
    // else
    //     flag=1;
    for (i = n - 2; i >= 0; i--)
    {
        if (a[i] > a[i + 1])
        {
            if (down == 1)
            {
                i += 1;
                break;
            }
            up = 1;
        }
        if (a[i] < a[i + 1])
        {
            down = 1;
            // if (up == 1)
            //     break;
        }
        // break;
        // if (a[i] > a[i + 1])
        // {
        //     if (down == 2)
        //         break;
        //     up = 1;
        //     if (down == 1)
        //         up = 2;
        // }
        // if (a[i] < a[i + 1])
        // {
        //     if (up == 2)
        //         break;
        //     down = 1;
        //     if (up == 1)
        //         down = 2;
        // }
    }
    if (i <= 0)
        i = 0;
    cout << i;
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