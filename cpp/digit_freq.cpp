#include<iostream>
#include<string>
using namespace std;

int main()
{

    string str;
    cin>>str;
    

    int a[10]={0};

    for(int i=0;i<str.length();i++)
    {
        // stringstream chn(str[i]);
        int r=0;
        r=(int)str[i];
        r-=48;
       
        a[r]++;
        
    }

    for(int i=0;i<10;i++)
    {
        cout<<i<<" "<<a[i]<<endl;
    }
}