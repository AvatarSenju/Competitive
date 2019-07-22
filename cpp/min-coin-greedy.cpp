#include<bits/stdc++.h>
using namespace std;


void find_coin(int val,vector<int> deno)
{
    int size = deno.size();
    map<int,int>ans;
    for (int i = size-1; i >= 0;i--)
    {
        while(val>=deno[i])
        {
            ans[deno[i]]++;
            val-=deno[i];
        }
    }

    for (auto i : ans)
    {
        cout << i.first << " -->" << i.second<<endl;
    }
    
    
}



int main()
{
    vector<int>vect={1,2,3,3,4};
    find_coin(5,vect);
    return 0;
}