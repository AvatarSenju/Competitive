#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void post(string s)
{
    stack<char> st;
    string a="";
    int n=s.size();
    
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a' && s[i]<='z')
            a+=s[i];
        else if(s[i]=='(')
            st.push(s[i]);
        else if(s[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                a+=st.top();
                st.pop();
            }
            st.pop();
        }

        else
        {
            while (!st.empty() && prec(s[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                a += c;
            }
            st.push(s[i]);
        }
    }

  

    cout<<a<<endl;
}


int main()
{
    int test=0;
    cin>>test;
    while(test--)
    {
        string a;
        cin>>a;
        post(a);
    }

  
    return 0;
}