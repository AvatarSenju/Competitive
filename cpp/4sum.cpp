#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fourSumCount(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D)
    {
        int n = A.size();
        int result = 0;
        unordered_map<int, int> E;
        unordered_map<int, int> F;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                int sum1 = A[i] + B[j];
                int sum2 = C[i] + D[j];
                E[sum1]++;
                F[sum2]++;
            }
        }
        for (auto num1 : E)
        {
            int number = num1.first;
            if (F.find(-1 * number) != F.end())
            {
                result += num1.second * F[-1 * number];
            }
        }
        return result;
    }
};