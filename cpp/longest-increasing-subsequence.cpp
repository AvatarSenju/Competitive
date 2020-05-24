#include <bits/stdc++.h>
using namespace std;

int maxLength(vector<int> &ar)
{
    int len = 0;
    int size = ar.size();
    vector<int> lis(size, 1);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (ar[i] > ar[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
        }
    }
    return *max_element(lis.begin(), lis.end());
}

int main()
{

    vector<int> ar{0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    cout << maxLength(ar) << endl;

    return 0;
}