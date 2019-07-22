#include<bits/stdc++.h>
using namespace std;

template <typename T, typename U>
inline void amax(T &x, U y)
{
    if (x < y)
        x = y;
}


int mymax(vector<vector<int>> a,int i,int j,int n,int m)
{
    if(i>=n || j>=m)
        return 0;
    return(a[i][j]+max(mymax(a,i+1,j,n,m),mymax(a,i,j+1,n,m)));
}



int  main()
{
    // int a[3][4]={0,3,1,1,2,0,0,4,1,5,3,1};
    vector<vector<int>> vect ={{0,3,10,1},{2,0,0,4},{1,5,3,1}};
    int p=mymax(vect,0,0,3,4);
    cout<<p<<endl;

    return 0;
}