//rotate 2d matrix 90 degree clockwise
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int ar[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int br[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 2, k = 0; i >= 0; i--, k++)
    {
        for (int j = 2; j >= 0; j--)
        {
            br[k][j] = ar[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << br[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}