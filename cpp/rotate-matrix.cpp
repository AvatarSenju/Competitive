#include<bits/stdc++.h>
using namespace std;


void rotate(int a[],int n,int k)
{
   
    while(k--)
    {
        
        int temp=a[0];
        for (int i = 0; i < n-1; i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
        
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    return;
}



int main()
{
    int mat[6]={1,2,3,4,5,6};
    int k=2;
    for (int i = 0; i < 6; i++)
    {
        cout << mat[i] << " ";
    }
    cout << endl;
    rotate(mat,6,k);

   
    


    return 0;

}