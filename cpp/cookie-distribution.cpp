// Assume you are an awesome parent and want to give your children some cookies.But, you should give each child at most one cookie.Each child i has a greed factor gi, which is the minimum size of a cookie that the child will be content with;
// and each cookie j has a size sj.If sj >= gi, we can assign the cookie j to the child i, and the child i will be content.Your goal is to maximize the number of your content children and output the maximum number.
#include <bits/stdc++.h>
using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{

    int count = 0;

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int n = g.size();
    int k = s.size();

    int i = n - 1, j = k - 1;

    while (i >= 0)
    {
        if (j < 0)
            break;
        if (s[j] >= g[i])
        {
            count++;
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }
    return count;
}