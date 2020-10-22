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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll sum = 0;
    ll count = 0;

    unordered_map<ll, ll> mp;
    ll curSum = 0;
    for (ll i = 1; i <= n; i++)
    {
        curSum += (s[i - 1] - '0');
        if (curSum == i)
            count++;
        if (mp.find(curSum - i) != mp.end())
            count += mp[curSum - i];
        mp[curSum - i]++;
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