#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

bool ispalin(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

int checkAll(string s)
{
    if (s.length() <= 1)
        return 1;
    return;
}

int main()
{
    cout << ispalin("nitin") << endl;
    cout << ispalin("elle") << endl;
    cout << ispalin("hello") << endl;

    return 0;
}