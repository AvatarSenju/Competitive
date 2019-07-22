#include <bits/stdc++.h>
using namespace std;

int subXor(vector<int> &ar)
{
    int n = ar.size();
    int xr[n];
    xr[0] = n;
    for (int i = 1; i < n; i++)
    {
        xr[i] = (i + 1) * (n - i);
    }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (xr[i] % 2 != 0)
        {
            res ^= ar[i];
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        ar.push_back(t);
    }

    int res = subXor(ar);
    cout << res << endl;
}