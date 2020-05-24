#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> &vect)
{

    int n = vect.size();
    vector<int> dp(n + 2, 0);
    dp[0] = 0;
    dp[1] = 0;
    int i = 0, j = n - 1, turns = 2;
    while (i <= j)
    {
        int curBest = 0;
        if (vect[i] > vect[j])
        {
            curBest = vect[i];
            i++;
        }
        else
        {
            curBest = vect[j];
            j--;
        }
        dp[turns++] = curBest + dp[turns - 2];
    }
    if (n % 2 == 0)
        return dp[n];
    return dp[n + 1];
}

int main()
{
    vector<int> vect{1, 3, 2, 4};
    cout << findMax(vect) << endl;
    return 0;
}