#include <bits/stdc++.h>
using namespace std;

void part(vector<int> &vect, int k)
{

    int n = vect.size();
    int i = 0, j = 0;
    while (j < n)
    {
        if (vect[j] <= k)
        {
            int temp = vect[i];
            vect[i] = vect[j];
            vect[j] = temp;
            i++;
        }
        j++;
    }
}

int main()
{
    vector<int> vect{9, 12, 3, 5, 14, 10, 10};
    int k = 10;
    part(vect, 10);
    int n = vect.size();

    for (int i = 0; i < n; i++)
    {
        cout << vect[i] << " ";
    }

    return 0;
}