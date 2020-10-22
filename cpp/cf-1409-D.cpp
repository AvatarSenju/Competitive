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

int sumDigit(ll n)
{
    int c = 0;
    while (n > 0)
    {
        int a = n % 10;
        c += a;
        n /= 10;
    }
    return c;
}

void solve()
{
    ull n, s;
    cin >> n >> s;
    // if (s == 1)
    // {
    //     int x = (int)ceil(log10(n));
    //     ull p = pow(10, x);

    //     cout << p - n;
    //     return;
    // }
    int k = sumDigit(n);
    if (k <= s)
    {
        cout << "0";
        return;
    }
    ull d = n;
    // int len = (int)ceil(log10(n));
    string b = to_string(n);
    int len = b.length();
    int i = len - 1;

    while (k > s)
    {
        if (i == 0)
        {
            string p = "1";
            for (int i = 0; i < len; i++)
                p += '0';
            // int x = (int)ceil(log10(n));
            ull x = stoull(p);

            cout << x - n;
            return;
        }

        int a = b[i] - '0';
        // i--;
        if (a == 0)
        {
            i--;
            continue;
        }
        // continue;
        else
        {
            k -= a;

            b[i] = '0';
            while (i > 0 && b[i - 1] - '0' == 9)
            {
                if (i == 0)
                {
                    string p = "1";
                    for (int i = 0; i < len; i++)
                        p += '0';
                    // int x = (int)ceil(log10(n));
                    ull x = stoull(p);

                    cout << x - n;
                    return;
                }
                k -= 9;
                b[i - 1] = '0';
                i--;
            }
            b[i - 1]++;
            k += 1;
            i--;
        }

        // ull p = pow(10, i);
        // i++;
        // int a = n % p;
        // if (a == 0)
        //     continue;
    }
    d = stoull(b);
    cout << d - n;
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