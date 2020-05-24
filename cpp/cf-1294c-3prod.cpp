
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void findProd(ll n)
{
    for (ll i = 2; i <= n / 4; i++)
    {
        for (ll j = 2; j <= n / 4 && j <= n / i; j++)
        {
            for (ll k = 2; k <= n / (i * j) && j <= n / 4; k++)
            {
                if (i * j * k == n && i != j && i != k && j != k)
                {
                    cout << "YES" << endl;
                    cout << i << " " << j << " " << k << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
    return;
}

int main()
{

    ll n = 0;
    cin >> n;
    while (n--)
    {
        ll inp = 0;
        cin >> inp;
        findProd(inp);
    }

    // findProd(64);
    return 0;
}