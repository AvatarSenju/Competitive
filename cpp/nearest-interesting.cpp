// Thus, he considers a positive integer n interesting if its sum of digits is divisible by 4.

// Help Polycarp find the nearest larger or equal interesting number for the given number a. That is, find the interesting number n such that n≥a and n is minimal.

#include <bits/stdc++.h>
using namespace std;

int isSum(int a)
{
    int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    if (sum % 4 == 0)
        return 0;
    return 1;
}

int main()
{

    int a = 0;
    cin >> a;

    int check = isSum(a);
    while (check != 0)
    {
        a++;
        check = isSum(a);
    }
    cout << a << endl;

    return 0;
}