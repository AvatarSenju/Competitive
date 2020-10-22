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

ull maxPrimeFactors(ull n)
{
    // Initialize the maximum prime factor
    // variable with the lowest one
    ull maxPrime = -1;

    // Print the number of 2s that divide n
    // while (n % 2 == 0)
    // {
    //     maxPrime = 2;
    //     n >>= 1; // equivalent to n /= 2
    // }

    // n must be odd at this point, thus skip
    // the even numbers and iterate only for
    // odd integers
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return i;
    }

    // This condition is to handle the case
    // when n is a prime number greater than 2
    if (n > 2)
        maxPrime = n;

    return maxPrime;
}

void solve()
{
    ull n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << " " << n / 2;
        return;
    }
    ull k = maxPrimeFactors(n);
    if (k == n)
        cout << n - 1 << " " << 1;
    else
    {
        ull d = (n / k);
        cout << d << " " << n - d;
    }

    // ull k = ceil(sqrt(n));
    // ull m = n - k;
    // ull a = k - 1;
    // ull b = n - a;
    // ull l1 = (a * b) / __gcd(a, b);
    // ull l2 = (k * m) / __gcd(k, m);
    // if (l1 < l2)
    //     cout << a << " " << b;
    // else
    // {
    //     cout << k << " " << m;
    // }
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