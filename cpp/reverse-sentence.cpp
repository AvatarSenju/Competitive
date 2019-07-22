#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[]="hello world anushrut here";
    stack<char *> stk;
    char *token = strtok(str," ");
    while(token!=NULL)
    {
        stk.push(token);
    }
    while(!stk.empty())
    {
        cout<<stk.top()<< " ";
        stk.pop();
    }

}