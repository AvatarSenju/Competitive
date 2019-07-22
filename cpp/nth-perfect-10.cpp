// A number is considered perfect if its digits sum up to exactly 10.

//     Given a positive integer n,
//     return the n - th perfect number.

#include <bits/stdc++.h>
using namespace std;

int perfect(int n)
{
    // if (n == 1)
    //     return 19;
    // else
    // {
    //     int a = (n - 1) * 9 + 19;
    //     if (a % 10 == 0)
    //         return a + 9;
    //     else
    //         return a;
    // }

    //removing efficiently

    int nthElement = 19 + (n - 1) * 9;
    int outliersCount = (int)log10(nthElement) - 1;

    // find the nth perfect number
    nthElement += 9 * outliersCount;
    return nthElement;
}

int main()
{

    cout << perfect(20) << endl;
    cout << perfect(11) << endl;
    cout << perfect(10) << endl;
    cout << perfect(24) << endl;
}