#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, a = 0, sum = 1;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += a;
        a += 4;
    }

    cout << sum << endl;

    return 0;
}