#include<bits/stdc++.h>
using namespace std;

int max(int a, int b)
{
    return a>b?a:b;
}

int check(int n, int m, vector<vector<int>> vect)
{
    if(n>= vect.size() || m>=vect[n].size())
        return 0;
    if(vect[n][m]==0)
        return 1;
    
    else
    {
        int a = check(n+1,m,vect);
        int b = check(n,m+1,vect);
        return(1+(a*b));
    }
    
}

void printMax(vector<vector<int>> M)
{
    int i,j;
    vector<vector<int>> S;
    for (i = 0; i < M.size(); i++)
        S[i][0] = M[i][0];

    /* Set first row of S[][]*/
    for (j = 0; j < M[0].size(); j++)
        S[0][j] = M[0][j];

    
}



int main()
{
    vector<vector<int>>vect = {{1,0,0,0},{1,0,1,1},{1,0,1,1},{0,1,1,1}};


    int res=0;
    for(int i=0;i<vect.size();i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            res = max(res,check(i,j,vect));
        }
        
    }

    cout<<res<<endl;



    return 0;
}