#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    stack<int> st;
    // set<int> pq;
    stack<int> minst;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        if (s[0] == 'M')
        {
            if (!st.empty())
                cout << minst.top() << endl;
            else
            {
                cout << "EMPTY" << endl;
            }
        }
        else if (s[1] == 'O')
        {
            if (!st.empty())
            {
                // int a = st.top();
                minst.pop();
                st.pop();
                // auto it = pq.find(a);
                // pq.erase(it);
            }
            else
            {
                cout << "EMPTY" << endl;
            }
        }
        else
        {
            int a = 0;
            cin >> a;

            st.push(a);
            // pq.insert(a);

            if(minst.empty())
                minst.push(a);
            else
                minst.push(min(a,minst.top()));
        }
    }

    return 0;
}