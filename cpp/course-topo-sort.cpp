//not correct

#include <bits/stdc++.h>
using namespace std;

void topoSort(unordered_map<string, vector<string>> &mp)
{

    stack<string> dfs;
    stack<string> st;
    set<string> visited;
    // set<string>visited;
    for (auto m : mp)
    {
        if (visited.find(m.first) == visited.end())
        {

            visited.insert(m.first);
            dfs.push(m.first);
            while (!dfs.empty())
            {

                string top = dfs.top();
                dfs.pop();
                if (top.length() <= 0)
                    continue;
                int count = 0;
                for (auto v : mp[top])
                {
                    if (visited.find(v) == visited.end())
                    {
                        count++;
                        dfs.push(v);
                        visited.insert(v);
                        // cout << v << "-->";
                    }
                }
                cout << top << "-->";

                if (count == 0)
                {
                    st.push(top);
                }
                else
                {
                    count = 0;
                }
            }
        }
    }
}

int main()
{

    unordered_map<string, vector<string>> mp;
    mp["D"].push_back("E");
    mp["C"].push_back("D");
    mp["B"].push_back("D");
    mp["A"].push_back("C");
    mp["A"].push_back("B");

    topoSort(mp);
    return 0;
}