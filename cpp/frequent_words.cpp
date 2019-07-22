#include <bits/stdc++.h>
using namespace std;

vector<string> split(string s)
{
    int n = s.length();
    vector<string> r;
    string res = "";
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        //!?',;.
        if (ch != ' ' && ch != '.' && ch != ',' && ch != ';' && ch != '\'' && ch != '?' && ch != '!' && ch != '\n')
        // if (ch != ' ' && ch != '.')
        {
            res += ch;
        }
        else
        {
            if (res.length() > 0)
                r.push_back(res);
            res = "";
        }
    }
    if (res.length() > 0)
        r.push_back(res);

    return r;
}

string mostCommonWord(string paragraph, vector<string> &banned)
{
    transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);

    // vector<string> result;
    // istringstream iss(paragraph);
    // vector<string> tokens{istream_iterator<string>{iss}, istream_iterator<string>{" ", ","}};
    // boost::split(result, paragraph, boost::is_any_of(" "));

    vector<string> tokens;
    tokens = split(paragraph);
    map<string, int> mp;
    int n = tokens.size();
    for (auto it : tokens)
    {
        vector<string>::iterator f;
        f = find(banned.begin(), banned.end(), it);
        if (f == banned.end())
        {
            mp[it]++;
        }
    }

    string result;
    int maxFreq = 0;

    for (auto m : mp)
    {
        if (m.second > maxFreq)
        {
            result = m.first;
            maxFreq = m.second;
        }
    }

    return result;
}

int main()
{

    // string para = "Bob hit a ball, the hit BALL flew far after it was hit.";
    string para = "Bob";

    // vector<string> ban{"hit"};
    vector<string> ban{""};

    string res = mostCommonWord(para, ban);
    cout << res << endl;

    return 0;
}