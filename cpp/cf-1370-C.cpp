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
    if (n == 1)
    {
        cout << "FastestFinger";
        return;
    }
    if (n % 2 != 0 || n == 2)
    {
        cout << "Ashishgup";
        return;
    }
    if (ceil(log2(n)) == floor(log2(n)))
    {
        cout << "FastestFinger";
        return;
    }
    else
    {
        int k = n / 2;
        for (int i = k; i >= 1; i--)
        {
            if (i % 2 != 0 && n % i == 0)
            {
                if (n / i == 2)
                {
                    cout << "FastestFinger";
                    return;
                }
                else
                {
                    cout << "Ashishgup";
                    return;
                }
            }
        }
    }
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