// simple mod(-a,b)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t = 0;
    cin >> t;
    while (t--)
    {
        long long a = 0, b = 0;
        cin >> a >> b;
        if (a % b != 0)
            cout << (b - ((a) % (b))) << endl;
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}