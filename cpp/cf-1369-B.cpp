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
    string s;
    cin >> s;
    // int flag = 0, f1 = 0, f2 = 0;
    // if (s[0] == '0')
    //     f2 = 0;
    // if (s[0] == '1')
    //     f1 = 0;
    // for (int i = 1; i < n; i++)
    // {
    //     if (s[i - 1] == '1' && s[i] == '0')
    //         flag = 1;
    //     if (s[i] == '1')
    //         f1 = 1;
    //     if (s[i] == '0')
    //         f2 = 1;
    // }
    // if (flag == 0 || f1 == 0 || f2 == 0)
    // {
    //     cout << s;
    //     return;
    // }
    int i = 0, j = n - 1;
    while (s[i] != '1' && i < n)
        i++;
    while (s[j] != '0' && j >= 0)
        j--;

    if (i >= j)
    {
        cout << s;
        return;
    }
    for (int l = 0; l < i; l++)
        cout << s[l];
    for (int k = j; k < n; k++)
        cout << s[k];
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