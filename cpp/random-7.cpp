#include <bits/stdc++.h>
using namespace std;

int rand5()
{

    return rand() % 5 + 1;
}

int rand7()
{
    int a = 5 * rand5() + rand5() - 5;
    if (a < 22)
        return a % 7 + 1;
    else
    {
        return rand7();
    }
}

int main()
{
    srand(time(0));
    int a = rand7();
    cout << a << " " << endl;
    cout << rand7() << " " << endl;

    cout << rand7() << " " << endl;
    cout << rand7() << " " << endl;
    cout << rand7() << " " << endl;
    cout << rand7() << " " << endl;
    cout << rand7() << " " << endl;

    return 0;
}