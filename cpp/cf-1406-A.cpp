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
    vector<int> a(101, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    int sum = 0, i = 0;
    for (i = 0; i < 101; i++)
    {
        if (a[i] < 1)
        {
            sum += i;

            break;
        }
        a[i]--;
    }
    // i++;
    for (i = 0; i < 101; i++)
    {
        if (a[i] < 1)
        {
            sum += i;
            break;
        }
        a[i]--;
    }
    cout << sum;
    // sort(all(a));
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