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
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            one++;
    }
    int j = n - 1;
    for (; j >= 0; j--)
        if (a[j] != 1)
            break;
    if (j < 0)
    {
        if (n % 2 == 0)
            cout << "Second";
        else
        {
            cout << "First";
        }
        return;
    }
    int x = 0;
    // cout << j << " ";
    for (int i = 0; i < j;)
    {
        // if()
        if (a[i] == 1)
        {
            i++;
            x = x ^ 1;
            one--;
        }
        else
        {
            if ((i != j - 1) && (one % 2 != 0) && one > 0)
            // if (a[i + 1] == 1 && i != j - 1)
            {
                i++;
                x = x ^ 1;
            }
            else
            {
                a[i] = 1;
                x = x ^ 1;
                one++;
            }
        }
    }
    if (x == 0)
        cout << "First";
    else
        cout << "Second";
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
