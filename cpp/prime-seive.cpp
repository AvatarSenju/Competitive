#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    bool mark[n+1];
    memset(mark,true,sizeof(mark));

    for(int p=2;p*p<=n;p++)
    {
        if(mark[p]==true)
        {
            for(int i=p*p;i<=n;i+=p)
                mark[i]=false;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(mark[i]==true)
            cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    sieve(100);
    return 0;
}
