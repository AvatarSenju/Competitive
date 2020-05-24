#include <bits/stdc++.h>
using namespace std;

void find_coin(int val, vector<int> deno)
{
    int m = deno.size();
    vector<int> dp(val + 1, INT_MAX);

    dp[0] = 0;
    for (int i = 1; i <= val; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (deno[j] <= i)
            {
                int sub = dp[i - deno[j]]; //????
                if (sub != INT_MAX && sub + 1 < dp[i])
                    dp[i] = sub + 1;
            }
        }
    }
    if (dp[val] == INT_MAX)
        cout << "-1" << endl;
    else
    {
        cout << dp[val] << endl;
        /* code */
    }
}
int main()
{

    vector<int> deno{3, 1};
    int val = 11;
    find_coin(val, deno);
    return 0;
}