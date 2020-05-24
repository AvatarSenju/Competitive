#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s)
{

    int countvalley = 0, countup = 0, countdown = 0, curcount = 0, startcount = 0;
    if (s[0] == 'U')
        startcount = 1;
    else
        startcount = -1;
    curcount = startcount;
    for (int i = 1; i < n; i++)
    {
        if (curcount == 0)
        {
            if (s[i] == 'U')
                startcount = 1;
            else
                startcount = -1;
            // curcount = startcount;
        }
        if (startcount < 0)
            countvalley++;
        startcount = 0;
        if (s[i] == 'U')
            curcount++;
        else
            curcount--;
    }
    return countvalley;
}

int main()

{
    string s = "DDUUDDUDUUUD";
    int n = 12;
    cout << countingValleys(n, s) << endl;
    ;
    return 0;
}