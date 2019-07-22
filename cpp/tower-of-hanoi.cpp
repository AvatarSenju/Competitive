#include<iostream>
using namespace std;
void toh(int from,int aux,int to,int n)
{
    if(n==1)
    {
        cout<<from<<" to "<<to<<endl;
        return;
    }


    toh(from,to,aux,n-1);
    cout<<from<<" to "<<to<<endl;
    toh(aux,from,to,n-1);
}


int main()
{
    toh(1,2,3,64);
    return 0;
}