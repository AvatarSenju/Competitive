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
    set<int> st;
    vector<int> v;
    for (int i = 0; i < (2 * n); i++)
    {
        int k;
        cin >> k;
        if (st.find(k) == st.end())
        {
            v.push_back(k);
            st.insert(k);
        }
    }
    for (auto i : v)
        cout << i << " ";
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