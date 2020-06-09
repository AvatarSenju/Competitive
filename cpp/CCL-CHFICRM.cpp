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
    ull ar[3] = {0, 0, 0}; //5 10 15
    int al[n];
    for (int i = 0; i < n; i++)
        cin >> al[i];
    // cout << ar[0];
    for (int i = 0; i < n; i++)
    {
        int a = al[i];
        if (a == 5)
            ar[0]++;
        else if (a == 10)
        {
            if (ar[0] > 0)
            {
                ar[0]--;
                ar[1]++;
            }
            else
            {
                cout << "NO";
                return;
            }
        }
        else
        {

            if (ar[1] > 0)
            {
                ar[1]--;
                ar[2]++;
            }
            else if (ar[0] >= 2)
            {
                ar[0] -= 2;
                ar[2]++;
            }
            else
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
    return;
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