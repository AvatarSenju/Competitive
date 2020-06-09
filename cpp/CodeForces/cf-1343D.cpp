#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        vector<int> ar(n, 0);
        for (int i = 0; i < n; i++)
            cin >> ar[i];
        for (int i = 0; i < n / 2; i++)
        {
            mp[ar[i] + ar[n - i - 1]]++;
        }
        int ma = 0;
        for (auto m : mp)
        {
            ma = max(ma, m.second);
            // int s=(int)m.second;
            // ma=s>m?s:m;
        }
        int res = (n / 2) - ma;
        cout << res << "\n";
    }

    return 0;
}