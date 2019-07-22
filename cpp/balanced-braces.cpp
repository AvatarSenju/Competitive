#include <bits/stdc++.h>
using namespace std;

int check(string s)
{
    stack<char> st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            st.push(s[i]);
        else
        {
            if (s[i] == ')')
            {
                if (st.top() == '(')
                    st.pop();
                else
                    return 0;
            }

            else if (s[i] == ']')
            {
                if (st.top() == '[')
                    st.pop();
                else
                    return 0;
            }

            if (s[i] == '}')
            {
                if (st.top() == '{')
                    st.pop();
                else
                    return 0;
            }
        }
    }

    if (st.empty())
        return 1;
    else
        return 0;
}

int main()
{

    int a = check("([])[]({})");
    int b = check("([)]");
    int c = check("((()");

    cout << a << " " << b << " " << c << endl;

    return 0;
}