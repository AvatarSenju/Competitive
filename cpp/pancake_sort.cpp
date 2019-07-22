#include <bits/stdc++.h>
using namespace std;

int max_index(vector<int> &vect, int n)
{
    int max = INT_MIN, index = 0;
    for (int i = 0; i < n; i++)
    {
        if (vect[i] > max)
        {
            max = vect[i];
            index = i;
        }
    }
    return index;
}

void swap(vector<int> &vect, int i)
{

    int temp = vect[i];
    vect[i] = vect[0];
    vect[0] = temp;
}

void flip(vector<int> &vect, int n)
{
    // int n = vect.size();
    if (n <= 1)
        return;
    int i = max_index(vect, n);
    swap(vect, i);
    // reverse(vect, n);
    reverse(vect.begin(), vect.begin() + n);
    flip(vect, n - 1);
}

int main()
{

    vector<int> vect{4, 5, 2, 1, 6, 9, 3, 5, 8, 7, 1};
    flip(vect, 11);
    vector<int>::iterator it;

    for (it = vect.begin(); it != vect.end(); it++)
        cout << (*it) << " ";

    return 0;
}