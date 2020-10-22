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
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n, 0);
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == 0)
            c.push_back(a[i]);
    }
    sort(all(c));
    int j = c.size() - 1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
            cout << a[i] << " ";
        else
        {
            cout << c[j--] << " ";
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