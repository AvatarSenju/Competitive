#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d, x, y, x1, x2, y1, y2;
        cin >> a >> b >> c >> d;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        // long long stx = x + abs(a - b);
        // long long sty = y + abs(c - d);
        // long long difx = max(abs(x1), abs(x2)) - x;
        // long long dify = max(abs(y1), abs(y2)) - y;
        if ((x - a < x1 && x + b > x2) || (y - c < y1 && y + d > y2))
        {
            cout << "NO\n";
            continue;
        }
        long long xs = x - a + b;
        long long ys = y - c + d;
        if (xs <= x2 && xs >= x1 && ys <= y2 && ys >= y1)
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}