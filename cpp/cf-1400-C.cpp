// 17
// 11111000000011001100110000010101100001011110011001111001110111110010110111111111111111001011011101110111011111111101011111011001001001100100000010000101000100110

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

void solve2()
{
    string s;
    cin >> s;
    int x;
    cin >> x;
    int n = s.length();

    vector<char> w(n, '1');

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if (i - x >= 0)
                w[i - x] = '0';
            if (i + x < n)
                w[i + x] = '0';
        }
    }

    // vector<char> d(n, '0');

    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == '1')
    //     {
    //         if (i - x >= 0)
    //             d[i - x] = '1';
    //         if (i + x < n)
    //             d[i + x] = '1';
    //     }
    // }

    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        ok = false;

        if ((i - x >= 0 && w[i - x] == '1') || (i + x < n && w[i + x] == '1'))
        {
            ok = true;
        }

        if (!ok && s[i] == '1')
        {
            cout << -1;
            return;
        }
    }
    for (auto i : w)
        cout << i;
}

void solve()
{
    string s;
    cin >> s;
    int x;
    cin >> x;
    int n = s.length();

    vector<char> w(n, '0');

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            if (i - x >= 0)
                w[i - x] = '1';
            if (i + x < n)
                w[i + x] = '1';
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            if ((i - x >= 0 && w[i - x] == '1') || (i + x < n && w[i + x] == '1') || (i - x < 0 && i + x >= n))
            {
                cout << -1;
                return;
            }
        }
    }
    for (auto i : w)
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
        solve2();
        // solve();
        cout << "\n";
    }

    return 0;
}