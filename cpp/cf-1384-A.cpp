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
    string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    // cout << s.length();
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << s << endl;
    for (int i = 0; i < n; i++)
    {
        int k = a[i];
        bool ch = true;
        if (s[k] == 'a')
            ch = false;
        for (int i = k; i < 100; i++)
        {
            if (ch)
                s[i] = 'a';
            else
                s[i] = 'b';
        }
        cout << s << endl;
    }
    // for (int i = 0; i < 100; i++)
    //     cout << 'a';
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
        // cout << "\n";
    }

    return 0;
}