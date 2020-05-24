#include <bits/stdc++.h>
using namespace std;

void DtoR(int n)
{
    int ar[13] = {0};
    map<int, string> mp = {make_pair(0, "I"), make_pair(1, "IV"), make_pair(2, "V"), make_pair(3, "IX"), make_pair(4, "X"), make_pair(5, "XL"), make_pair(6, "L"), make_pair(7, "XC"), make_pair(8, "C"), make_pair(9, "CD"), make_pair(10, "D"), make_pair(11, "CM"), make_pair(12, "M")};
    int temp = 0;
    int a = n;
    //1000
    temp = a / 1000;
    ar[12] += temp;
    a = a % 1000;
    //900
    temp = a / 900;
    ar[11] += temp;
    a = a % 900;

    temp = a / 500;
    ar[10] += temp;
    a = a % 500;

    temp = a / 400;
    ar[9] += temp;
    a = a % 400;

    temp = a / 100;
    ar[8] += temp;
    a = a % 100;

    temp = a / 90;
    ar[7] += temp;
    a = a % 90;

    temp = a / 50;
    ar[6] += temp;
    a = a % 50;

    temp = a / 40;
    ar[5] += temp;
    a = a % 40;

    temp = a / 10;
    ar[4] += temp;
    a = a % 10;

    temp = a / 9;
    ar[3] += temp;
    a = a % 9;

    temp = a / 5;
    ar[2] += temp;
    a = a % 5;

    temp = a / 4;
    ar[1] += temp;
    a = a % 4;

    temp = a / 1;
    ar[0] += temp;
    a = a % 1;

    for (int i = 13; i >= 0; i--)
    {
        for (int j = 0; j < ar[i]; j++)
        {
            cout << mp[i];
        }
    }
}

int main()
{

    DtoR(949);
    return 0;
}