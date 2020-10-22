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
    int n, m;
    cin >> n >> m;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        st.insert(k);
    }
    int flag = 0;

    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        if (flag == 0 && st.find(k) != st.end())
        {
            flag = k;
            // return;
        }
    }
    if (flag != 0)
    {
        cout << "YES\n"
             << 1 << " " << flag;
        return;
    }
    cout << "NO";
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