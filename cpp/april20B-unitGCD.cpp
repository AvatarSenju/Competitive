#include <bits/stdc++.h>
using namespace std;

vector<long long> prod;
void sieve()
{
    int n = 1000000;
    int d = (int)sqrt(n);
    prod.push_back(1);
    vector<int> np(n + 1, 0);
    for (int i = 2; i <= d; i++)
    {
        if (np[i] == 0)
        {
            for (int j = i; j <= n; j *= i)
            {
                np[j] = 1;
            }
            prod.push_back(i);
        }
    }
    int k = prod.size();
    for (int i = 1; i < k; i++)
    {
        prod[i] = prod[i] * prod[i - 1];
    }
}
void sol(int n)
{
    int d = (int)sqrt(n);
    cout << d << "\n";
    vector<int> np(n + 1, 1);
    // np[1]=0;
    if (n == 1)
        cout << "1\n1 1\n";
    for (int i = 2; i <= d; i++)
    {
        // vector<int> p;

        for (int j = prod[i]; j <= n; j *= prod[i])
        {

            // p.push_back(j);
            np[j] = 0;
        }

        int sum = accumulate(np.begin(), np.end(), 0);
        cout << sum << " ";
        for (int i = 1; i <= n; i++)
        {
            if (np[i] == 1)
                cout << i << " ";
        }
        cout << "\n";
    }
}

int main()
{

    return 0;
}