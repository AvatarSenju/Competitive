#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    if (n <= k)
    {
        cout << 1;
        return;
    }
    else
    {
        int ans = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i <= k)
                    ans = max(ans, (n / i));
                if (i <= k)
                    ans = max(ans, i);
            }
        }
        cout << n / ans;
    }
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