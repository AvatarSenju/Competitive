#include <bits/stdc++.h>
using namespace std;

int main()

{

    int t = 0;
    cin >> t;
    while (t--)
    {
        int b, p, f, h, c;
        cin >> b >> p >> f;
        cin >> h >> c;
        int sum = 0;
        while (b >= 2)
        {
            if (h > c)
            {
                if (p >= 1)
                {
                    b -= 2;
                    p -= 1;
                    sum += h;
                }
                else if (f >= 1)
                {
                    b -= 2;
                    f -= 1;
                    sum += c;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (f >= 1)
                {
                    b -= 2;
                    f -= 1;
                    sum += c;
                }
                else if (p >= 1)
                {
                    b -= 2;
                    p -= 1;
                    sum += h;
                }
                else
                {
                    break;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}