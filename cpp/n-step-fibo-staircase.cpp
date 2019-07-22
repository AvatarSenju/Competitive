#include <bits/stdc++.h>
using namespace std;

int N_fibo(int n, vector<int> &k)
{
    if (n == 0)
        return 1;
    vector<int> dp(n + 1, 0);
    int size = k.size();
    int total = 0;
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        total = 0;
        for (int j = 0; j < size; j++)
        {
            if (i - k[j] >= 0)
                dp[i] += dp[i - k[j]];
        }
    }

    return dp[n];
}

int main()
{
    vector<int> k{1, 3, 5};
    cout << N_fibo(7, k) << endl;
    return 0;
}