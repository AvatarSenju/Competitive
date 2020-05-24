#include <bits/stdc++.h>
using namespace std;

double binomCoeff(int n, int r)
{
    double res = 1;
    //for single value
    // if (r > n - r)
    //     r = n - r;

    for (int i = 0; i < r; i++)
    {
        cout << res << " "; //for pascal row
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

int main()
{
    // cout << binomCoeff(778, 116) << endl;
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i; j < 6; j++)
            cout << " ";
        binomCoeff(i, i + 1);
        cout << endl;
    }
    // cout << DBL_MAX;
    return 0;
}