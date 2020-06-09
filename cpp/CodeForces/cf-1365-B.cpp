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

bool issort(vector<int> n)
{
    int x = n.size();
    for (int i = 1; i < x; i++)
    {
        if (n[i] < n[i - 1])
            return false;
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    int f0 = 0, f1 = 0;
    // unordered_map<int, int> mp;
    // unordered_map<int, int> sum;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] == 0)
            f0 = 1;
        else
            f1 = 1;
    }
    if (issort(a))
    {
        cout << "Yes";
        return;
    }
    if (f0 == 0 || f1 == 0)
        cout << "No";
    // return;
    else
    {
        cout << "Yes";
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}