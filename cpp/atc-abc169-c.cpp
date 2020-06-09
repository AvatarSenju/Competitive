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
    ull a;
    long double b;
    cin >> a;
    cin >> b;
    ull prod = a * b;
    // sting s= prod.to
    cout << (ull)prod;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t = 0;
    solve();

    return 0;
}