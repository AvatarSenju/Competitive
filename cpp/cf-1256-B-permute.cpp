#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int a = 1, b = 0;
    while (q--)
    {
        int n, k;
        k = n - 1;
        vector<int> v(n);
        vector<int> index(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            index[v[i]] = i;
        }

        while (k > 0)
        {
            k--;
            if (v[b] == (a + 1))
            {
                a++;
                b++;
            }
        }
    }

    return 0;
}