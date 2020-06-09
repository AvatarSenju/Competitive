#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{

    int n = s.length();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            cnt++;
        else if (s[i] == ')')
            cnt--;
        if (cnt < 0)
            return 0;
    }

    return cnt == 0;
}

vector<string> find(string str)
{

    vector<string> res;

    queue<string> qu;
    qu.push(str);
    int found = 0;
    unordered_map<string, bool> vis;
    while (!qu.empty())
    {
        string s = qu.front();
        qu.pop();
        if (vis[s])
            continue;
        vis[s] = 1;
        if (isBalanced(s))
        {
            found = 1;
            res.push_back(s);
        }
        if (found == 1)
            continue;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == ')')
            {
                string v = s.substr(0, i) + s.substr(i + 1);
                qu.push(v);
            }
        }
    }
    return res;
}

int main()
{

    string a = "(a)())()";
    vector<string> res = find(a);
    for (auto s : res)
        cout << s << " ";
    return 0;
}