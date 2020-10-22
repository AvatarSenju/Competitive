
#include <bits/stdc++.h>
using namespace std;
vector<string> fullJustify(vector<string> &A, int B)
{

    vector<string> res;
    string s = "";
    for (auto i : A)
    {
        int k = i.length();
        if (k <= 0)
            continue;
        if (s.length() + k + 1 <= B)
            s = s + i + ' ';
        else if (s.length() + k == B)
        {
            s += i;
            res.push_back(s);
            s = "";
        }
        else
        {
            res.push_back(s);
            s = "";
        }
    }
    if (res.size() <= 0)
        return {};
    if (s.length() > 0)
        res.push_back(s);
    int k = res.size();
    int l = res[k - 1].length();
    for (int i = l; i < B; i++)
        res[k - 1] += ' ';

    for (auto i : res)
    {
        int c = 0;
        int n = i.length();
        while (n < B)
        {
            if (i[c] == ' ')
            {
                i = i.substr(0, c + 1) + ' ' + i.substr(c + 1);
                n++;
                c++;
            }
            c++;
        }
    }
    return res;
}

int main()
{
    vector<string> s{"This", "is", "an", "example", "of", "text", "justification."};
    int k = 16;
    vector<string> res = fullJustify(s, k);
    for (auto i : res)
        cout << i << endl;
}