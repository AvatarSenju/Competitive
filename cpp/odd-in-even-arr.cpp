#include<bits/stdc++.h>
using namespace std;

void search(int a[],int low,int high)
{
    if(low>high)
        return;
    if(low==high)
    {
        cout<<"required number is "<<a[low]<<endl;
        return;
    }
    int mid=(low+high)/2;

    if(mid%2==0)
    { 

        if(a[mid]==a[mid+1])
            search(a,mid+2,high);
        else
            search(a,low,mid);
        
    }

    else
    {
        if (a[mid] == a[mid -1])
            search(a, mid+1, high);
        else
            search(a, low, mid-1);
    }
    

}

int main()
{
    // int n;
    // cin>>n;
    // int ar[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>ar[i];
    // }
    int arr[] = {1, 1, 2, 2, 1, 1, 2, 2,2, 13,13, 1, 1, 40, 40};
    int len = sizeof(arr) / sizeof(arr[0]);

    search(arr,0,len-1);


    return 0;
}

