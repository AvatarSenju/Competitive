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
    string a, b;
    cin >> a;
    cin >> b;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            cout << -1;
            return;
        }
    }
    int count = 0;

    int i = 0, j = 0;
    while (i < n && j < n)
    {
        if (a[i] == b[i])
        {
            i++;
            // j++;
            continue;
        }
        j = i + 1;
        while (j < n && a[i] == a[j] && b[j] >= b[i])
        {
            a[j] = b[i];
            j++;
        }

        count++;
        i++;
    }
    cout << count;
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