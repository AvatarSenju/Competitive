#include <bits/stdc++.h>
using namespace std;

int main()
{

    // for (int i = 1; i < 100; i++)
    // {
    //     int x = 0, y = 0, p = 1;
    //     while (x < i)
    //     {
    //         if (p * p > y)
    //         {
    //             x = p;
    //             y += p;
    //         }
    //         p++;
    //     }
    //     cout << x << endl;
    // }

    int x = 8, y = 0, p = 1, count = 0;
    // while (x >= 0)
    // {
    //     int sq = p * p;
    //     if (sq > y)
    //     {
    //         x = p;
    //         y += sq;
    //         count++;
    //     }
    //     else
    //     {
    //         p++;
    //     }
    // }
    for (int i = 0; i < 1000;)
    {
        int add = sqrt(i) + 1;
        cout << add << " ";
        i += add * add;
    }

    cout << endl;
}