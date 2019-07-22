#include <bits/stdc++.h>
using namespace std;

string encrypt(string s)
{
    char ch = s[0];
    string res = "";
    int count = 0, n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ch)
        {
            count++;
        }
        else
        {
            res += to_string(count);
            res += ch;
            count = 1;
            ch = s[i];
        }
    }
    res += to_string(count);
    res += ch;
    return res;
}

string decrypt(string s)
{
    string res = "";
    int n = s.length();
    for (int i = 0; i < n; i += 2)
    {
        int freq = s[i] - 48;
        while (freq--)
        {
            res += s[i + 1];
        }
    }
    return res;
}
int main()
{

    string s = "AAAABBBCCDAA";
    string enc = encrypt(s);
    string dec = decrypt(enc);
    cout << enc << endl
         << dec << endl;

    return 0;
}