#include <bits/stdc++.h>
using namespace std;

int max_diff(vector<int> &vect)
{

    int n = vect.size();
    int diff = INT_MIN;
    int cur_min = vect[0];
    for (int i = 1; i < n; i++)
    {
        if (vect[i] - cur_min > diff)
            diff = vect[i] - cur_min;
        if (vect[i] < cur_min)
            cur_min = vect[i];
    }
    return diff;
}

int main()
{

    vector<int> vect{9, 11, 8, 5, 7, 10};
    cout << max_diff(vect) << endl;
    return 0;
}