// Given an arithmetic expression in Reverse Polish Notation, write a program to evaluate it.

//The expression is given as a list of numbers and operands.For example : [ 5, 3, '+' ] should return 5 + 3 = 8.

// For example,
// [ 15, 7, 1, 1, '+', '-', '/', 3, '*', 2, 1, 1, '+', '+', '-' ] should return 5, since it is equivalent to((15 / (7 - (1 + 1))) * 3) - (2 + (1 + 1)) = 5.

// You can assume the given expression is always valid.

//use python with lists to better implement multi digit values or string;

#include <bits/stdc++.h>
using namespace std;

int eval(vector<char> &vect)

{
    stack<int> st;
    int n = vect.size();
    for (int i = 0; i < n; i++)
    {
        if (vect[i] == '+')
        {
            int op1 = st.top();
            st.pop();

            int op2 = st.top();
            st.pop();

            int ans = op1 + op2;
            st.push(ans);
        }
        else if (vect[i] == '*')
        {
            int op1 = st.top();
            st.pop();

            int op2 = st.top();
            st.pop();

            int ans = op1 * op2;
            st.push(ans);
        }
        else if (vect[i] == '-')
        {
            int op1 = st.top();
            st.pop();

            int op2 = st.top();
            st.pop();

            int ans = op2 - op1;
            st.push(ans);
        }
        else if (vect[i] == '/')
        {
            int op1 = st.top();
            st.pop();

            int op2 = st.top();
            st.pop();

            int ans = op2 / op1;
            st.push(ans);
        }
        else
        {
            st.push(vect[i] - 48);
        }
    }
    return st.top();
}

int main()
{

    // vector<char> vect{'5', '7', '1', '1', '+', '-', '/', '3', '*', '2', '1', '1', '+', '+', '-'};
    vector<char> vect{'5', '3', '+'};
    int res = eval(vect);
    cout << res << endl;
}