#include <bits/stdc++.h>
using namespace std;

void split(string s, vector<string> &sp)
{
    // vector<string> res;

    string r = "";
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] != ' ')
            r += s[i];
        else
        {
            sp.push_back(r);

            r = " ";
            sp.push_back(r);
            r = "";
        }
    }
    sp.push_back(r);
}

void merge(vector<string> &res, vector<string> &sp, int k)
{
    int i = 0;
    int n = sp.size();
    string r = "";
    int temp = k;
    for (i = 0; i < n;)
    {
        if (temp == k && sp[i][0] == ' ')
        {
            i++;
            continue;
        }
        if (temp >= sp[i].length())
        {
            r += sp[i];
            temp -= sp[i].length();
            // r += ' ';
            i++;
        }
        else
        {
            res.push_back(r);
            r = "";
            temp = k;
        }
    }
    res.push_back(r);
}

// void combined(vector<string> &res,string s, int k)
// {
//     int sp=0;
//     int size=s.length();
//     int temp=k;
//     string r="";
//     for(int i=0;i<size;i++)
//     {
//         if(s[i]==' ')
//             sp=i;
//         if(temp)
//         {

//         }
//     }
// }

int main()
{
    string s = "the quick brown fox jumps over the lazy dog";
    // s += ' ';
    vector<string> sp;
    vector<string> res;
    split(s, sp);
    // for (auto i : sp)
    //     cout << i << endl;
    merge(res, sp, 10);
    for (auto i : res)
        cout << i << endl;
    return 0;
}