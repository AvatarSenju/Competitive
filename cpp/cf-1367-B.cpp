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
    vector<int> ar(n, 0);
    int o = 0, e = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] % 2 == 0)
        {
            e++;
            if (i % 2 != 0)
                d++;
        }
        else
        {
            o++;
            if (i % 2 == 0)
                d++;
        }
    }
    if (abs(o - e) > 1)
    {
        cout << (-1);
        return;
    }
    if (d % 2 != 0)
    {
        cout << (-1);
        return;
    }
    else
    {
        int a = d / 2;
        cout << a;
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
