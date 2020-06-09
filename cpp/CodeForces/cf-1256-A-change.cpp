#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, n, s, rema, remb, rem;
        cin >> a >> b >> n >> s;
        rema = s / n;
        if (rema <= a)
            s = s % n;
        else
        {
            s = s - (n * a);
        }

        if (s <= b)
            s = 0;
        if (s == 0)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}