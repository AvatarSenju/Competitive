#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> vect, int k)
{
    set<int> st;

    for (auto it : vect)
    {
        if (st.count(k - it) == 1)
            return true;

        else
        {
            st.insert(it);
        }
    }
    return false;
}

int main()
{
    vector<int> vect{4, 5, 2, 1, 6, 9, 3, 5, 8, 7, 1};
    bool ch = check(vect, 2);
    cout << ch << endl;
    return 0;
}