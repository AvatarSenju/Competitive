// You are given an array of length n + 1 whose elements belong to the set{1, 2, ..., n}.By the pigeonhole principle, there must be a duplicate.Find it in linear time and space.
#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int ar[], int size)
{
    // int size = sizeof(ar);
    int sum = (size * (size - 1)) / 2;
    for (int i = 0; i < size; i++)
    {
        sum -= ar[i];
    }

    return -sum;
}

int main()

{

    // int n;
    // cin>>n;
    int ar[5] = {1, 3, 2, 3, 4};

    int res = findDuplicate(ar, 5);
    cout << res << endl;
    return 0;
}