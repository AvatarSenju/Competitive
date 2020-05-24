#include <bits/stdc++.h>
using namespace std;

void witness(vector<int> &result, vector<int> &heights)
{
    int n = heights.size();
    int i = 0, curMax = INT_MIN;
    for (i = n - 1; i >= 0; i--)
    {
        if (heights[i] > curMax)
        {
            result.push_back(heights[i]);
            curMax = heights[i];
        }
    }
}

int main()
{
    vector<int> heights{3, 6, 3, 4, 1};
    vector<int> result;
    witness(result, heights);
    for (auto v : result)
        cout << v << " ";
    return 0;
}