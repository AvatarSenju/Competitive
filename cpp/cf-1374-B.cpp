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

vector<ll> primeFactors(int n)
{
    vector<ll> num(2, 0);
    // Print the number of 2s that divide n
    ll temp = n;
    int a = 0;
    ll k = 2;
    while (temp % 2 == 0)
    {

        num[0]++;
        temp /= 2;
    }

    while (temp % 3 == 0)
    {

        num[1]++;

        temp = temp /= 3;
    }
    return num;

    // This condition is to handle the case when n
    // is a prime number greater than 2
    // if (n > 2)
    //     cout << n << " ";
}

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 0;
        return;
    }
    vector<ll> a = primeFactors(n);

    // a[0] = floor(log2(n);
    // a[1] = log(n) / log(3);
    // if (a[1] == 0)

    // {
    //     cout << -1;
    //     return;
    // }
    // n = n / a[1];
    // a[0] = log2(n);

    // cout << n << "--";
    // for (auto i : a)
    //     cout << i << " ";
    if (a[1] <= 0 || a[1] < a[0] || pow(2, a[0]) * pow(3, a[1]) != n)
    {
        cout << -1;
        return;
    }
    ll k = a[1] - a[0];
    a[1] -= k;
    cout << a[1] + k * 2;
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