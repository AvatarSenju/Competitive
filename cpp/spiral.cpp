// Given a N by M matrix of numbers, print out the matrix in a clockwise spiral.

#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> &vect)
{

    int n = vect.size();
    int m = vect[0].size();

    int lim = n * m, i = 0, j = 0, h = 0, g = 0;

    while (lim > 0)
    {

        for (j = g; j < m - g; j++)
        {
            cout << vect[i][j] << endl;
            lim--;
        }
        i++;
        j--;

        for (; i < n - h; i++)
        {
            cout << vect[i][j] << endl;
            lim--;
        }
        j--;
        i--;

        for (; j >= g; j--)
        {
            cout << vect[i][j] << endl;
            lim--;
        }
        i--;
        j++;

        for (; i > h; i--)
        {
            cout << vect[i][j] << endl;
            lim--;
        }
        i++;
        g++;

        h++;
    }
}

int main()
{
    vector<vector<int>> vect{{1, 2, 3, 4, 5},
                             {6, 7, 8, 9, 10},
                             {11, 12, 13, 14, 15},
                             {16, 17, 18, 19, 20}};
    print(vect);
}