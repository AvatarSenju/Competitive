#include<bits/stdc++.h>
using namespace std;


double msqrt(int n)
{

    double x=n;
    double y=1;
    double e=0.0001;
    while((x-y)>e)
    {
        x=(x+y)/2;
        y=n/x;
    }
    return x;
}

int main()
{
    int x=5;
    double s=msqrt(x);
    cout<<s<<endl;
    return 0;

}