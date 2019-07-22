// Given a string, determine whether any permutation of it is a palindrome.

#include <bits/stdc++.h>
using namespace std;

bool findFreq(string s)
{
    int n = s.length();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    int count = 0;
    for (auto m : mp)
    {
        if (m.second % 2 != 0)
            count++;
    }
    if (count <= 1)
        return true;
    else
    {
        return false;
    }
}

int main()
{
    string s = "carraaceee";
    string t = "daily";
    cout << s << " " << findFreq(s) << endl;
    cout << t << " " << findFreq(t) << endl;
}