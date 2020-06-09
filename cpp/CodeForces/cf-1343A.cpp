#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ar[32];
    ar[0] = 1;
    for (int i = 1; i < 32; i++)
    {
        ar[i] = (long long)pow(2, i) + ar[i - 1];
    }
    // for (int i = 0; i < 32; i++)
    //     cout << ar[i] << "\n";
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        for (int i = 1; i < 32; i++)
        {
            if (n % ar[i] == 0)
            {
                cout << (long long)n / ar[i] << "\n";
                break;
            }
        }
    }

    return 0;
}