#include <bits/stdc++.h>
using namespace std;

void preprocess(string s, vector<int> &lps)
{
    if (s.length() < 1)
        return;
    else if (s.length() == 1)
    {
        lps[0] = 0;
        return;
    }
    int i = 1, j = 0, n = lps.size();
    lps[0] = 0;
    while (i < n)
    {
        // for mismatch
        if (s[i] != s[j])
        {
            // if no suffix
            if (j == 0)
            {
                lps[i] = 0;
                i++;
            }
            //check previous longest suffix
            else
            {
                j = lps[j - 1];
            }
        }
        //when match
        else
        {
            lps[i] = j + 1;
            i++;
            j++;
        }
    }
}

void find(string s, string pat, vector<int> &lps, vector<int> &result)
{
    int i = 0, j = 0, n = s.length(), m = lps.size(), count = 0;
    while (i < n)
    {

        if (s[i] == pat[j])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            count++;
            result.push_back(i - j);

            j = lps[j - 1];
        }
        else if (i < n && s[i] != pat[j])
        {
            if (j != 0)
                j = lps[j - 1];
            else
            {
                i++;
            }
        }
    }
}

int main()
{
    string s = "ABABDABACDABABCABAB";
    string pat = "ABAB";
    int n = pat.length();
    vector<int> lps(n, 0);
    preprocess(pat, lps);
    vector<int> result;
    find(s, pat, lps, result);
    for (auto v : result)
        cout << v << " ";
    return 0;
}