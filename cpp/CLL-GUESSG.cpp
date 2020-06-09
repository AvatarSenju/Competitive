#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n;
    cin >> n;
    ll le = 1, lo = 1, he = n, ho = n;
    int i = 0;
    while (true)
    {
        i++;
        if (i % 2 == 0)
        {
            ll me = le + (he - le) / 2;
            cout << me << "\n";
            char c;
            cin >> c;
            if (c == 'E')
                return;
            else if (c == 'G')
                le = me + 1;
            else
                he = me - 1;
        }
        else
        {
            ll mo = lo + (ho - lo) / 2;
            cout << mo << "\n";
            char c;
            cin >> c;
            if (c == 'E')
                return;
            else if (c == 'G')
                lo = mo + 1;
            else
                ho = mo - 1;
        }

        // ll m = lo + (ho - lo) / 2;

        // int ar[2] = {0, 0};
        // for (int i = 0; i < 3; i++)
        // {
        //     cout << m << "\n";
        //     char c;
        //     cin >> c;
        //     if (c == 'E')
        //         return;
        //     else if (c == 'G')
        //         ar[0]++;
        //     else
        //         ar[1]++;
        // }

        // if (ar[0] < ar[1])
        //     h = m - 1;
        // else
        //     l = m + 1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    // cout<<"\n"
}