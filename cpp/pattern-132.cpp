#include <bits/stdc++.h>
using namespace std;

bool find132pattern(vector<int> &nums)
{

    int n = nums.size();
    vector<int> bin(n, 0);
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            bin[i] = 1;
    }
    bin[n - 1] = 0;
    int flag = 0, i = 0;
    for (i = 0; i < n; i++)
    {
        if (bin[i] == 0)
            break;
    }
    for (; i < n; i++)
        if (bin[i] == 1)
            break;
    for (; i < n; i++)
        if (bin[i] == 0)
        {
            flag = 1;
            break;
        }

    return flag == 1 ? true : false;
}

int main()
{

    vector<int> vect{3, 1, 4, 2};
    bool res = find132pattern(vect);
    cout << res << endl;

    return 0;
}