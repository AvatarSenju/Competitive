//rows egg and coloums floors
#include <bits/stdc++.h>
using namespace std;

void findWorse(int e, int k)
{
    int dp[e + 1][k + 1];
    for (int i = 0; i < e; i++)
    {
        dp[i][0] = 0;
        dp[i][1] = 1;
    }
    for (int i = 0; i < k; i++)
        dp[0][i] = i;
}

int main()
{

    return 0;
}