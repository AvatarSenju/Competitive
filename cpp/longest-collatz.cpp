#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli helper(vector<lli> &ar, lli pos, lli limit)
{
    if (pos > limit)
    {
        if (pos % 2 == 0)
            return (helper(ar, (pos / 2), limit) + 1);
        else
        {
            return helper(ar, ((pos * 3) + 1), limit) + 1;
        }
    }
    if (ar[pos] != 0)
        return ar[pos];
    if (pos % 2 == 0)
        return (helper(ar, (pos / 2), limit) + 1);
    else
    {
        return helper(ar, ((pos * 3) + 1), limit) + 1;
    }
}

void maxCollatz(lli limit)
{
    vector<lli> ar(limit, 0);
    lli curMax = 0, count = 0, maxPos = 0;

    ar[1] = 1;
    for (lli i = 1; i < limit; i++)
    {
        ar[i] = helper(ar, i, limit);
        if (ar[i] > curMax)
        {
            curMax = ar[i];
            maxPos = i;
        }
    }
    cout << maxPos << " with chain size " << curMax << endl;
}

int main()
{
    lli limit = 1000000;
    maxCollatz(limit);
}