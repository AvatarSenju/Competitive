#include <bits/stdc++.h>
using namespace std;

int findswap(vector<int> &left, vector<int> &rig)
{

    int n = left.size(), lodd = 0, rodd = 0, sim = 0;
    for (int i = 0; i < n; i++)
    {
        if (left[i] % 2 != 0 && rig[i] % 2 != 0)
            sim++;
        if (left[i] % 2 != 0)
            lodd++;
        if (rig[i] % 2 != 0)
            rodd++;
    }

    if ((lodd + rodd) % 2 != 0)
        return -1;

    if (sim % 2 == 0)
    {
        if ((lodd + rodd) % 2 != 0)
            return -1;
        else
        {
            if (lodd % 2 == 0 && rodd % 2 == 0)
                return 0;
            else
            {
                return 1;
            }
        }
    }
    else
    {
        lodd -= sim;
        rodd -= sim;
        if (lodd <= 0 && rodd <= 0)
            return -1;
        if ((lodd % 2 != 0) && (rodd % 2 != 0))
            return 0;

        else
        {
            return 1;
        }
    }

}
int main()
{

    int n = 0;
    cin >> n;
    vector<int> left(n, 0);
    vector<int> rig(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> left[i] >> rig[i];
    }

    cout << findswap(left, rig) << endl;

    return 0;
}