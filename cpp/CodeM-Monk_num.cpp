#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

void num(ll n)
{
    ll total = 0;
    for (int i = 1; i <= n; i++)

    {
        ll sum = 0;
        if (n % i == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    sum = (sum + j) % MOD;
                }
            }
        }
        total = (total + sum) % MOD;
    }
    cout << total << endl;
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        ll k = 1;
        for (int i = 0; i < n; i++)
        {
            ll f = 0;
            cin >> f;
            k = k * f;
        }
        num(k);
    }
    return 0;
}