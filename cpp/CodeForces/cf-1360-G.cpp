#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (n * a != m * b)
    {
        cout << "NO";
        return;
    }
    cout << "YES"
         << "\n";
    vector<int> ar(m, 0);

    for (int i = 0; i < a; i++)
        ar[i] = 1;
    while (n--)
    {
        int l = a;
        for (auto i : ar)
            cout << i;
        cout << "\n";

        // vector<int> temp;
        while (l--)
        {
            ar.push_back(ar.front());
            ar.erase(ar.begin());
        }
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