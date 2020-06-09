#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        if (n % 4 != 0)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        int f = n / 2;

        for (int i = 1; i < f; i++)
        {
            cout << (2 * i) - 1 << " ";
        }
        f--;
        cout << n + f << "\n";
    }

    return 0;
}