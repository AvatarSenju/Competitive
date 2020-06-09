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

void c2b(int n, int m)
{
    stack<int> st;
    while (n != 0)
    {
        st.push(n % 2);
        n /= 2;
        m--;
    }
    while (m > 0)
    {
        m--;
        cout << 0;
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<ll> ar;
    set<ll> st;
    while (n--)
    {
        string s;
        cin >> s;
        st.insert(stoi(s, 0, 2));
    }
    for (ll i = 0; i < pow(2, m); i++)
    {
        if (st.find(i) != st.end())
            continue;
        ar.push_back(i);
    }
    int k = ar.size(), l, ans;
    l = k / 2;
    // vector

    if (k % 2 == 0)
        l--;
    ans = ar[l];

    //     l = k / 2;
    // else
    // //     l = (k / 2) + 1;
    // Convert.ToString(3, 2).PadLeft(4, '0')
    c2b(ans, m);
    // // cout << bitset<m>(l).to_string();
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