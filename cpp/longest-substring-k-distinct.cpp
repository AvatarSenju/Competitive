
// Given an integer k and a string s, find the length of the longest substring that contains at most k distinct characters.

#include <bits/stdc++.h>
using namespace std;

void find(string s, int k)
{
    map<char, int> mp;
    int n = s.length();
    int max_start, max_end, cur_start = 0, cur_end = 0;
    max_start = max_end = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        mp[s[i]]++;
        cur_end++;

        while (mp.size() > k)
        {
            mp[s[cur_start]] > 1 ? mp[s[cur_start]]-- : mp.erase(s[cur_start]);

            cur_start++;
        }

        if (cur_end - cur_start > max_end - max_start)
        {
            max_start = cur_start;
            max_end = cur_end;
        }
    }

    for (int i = max_start; i < max_end; i++)
    {
        cout << s[i];
    }
    cout << endl;
}

int main()
{

    find("abcbadadadada", 3);
    return 0;
}