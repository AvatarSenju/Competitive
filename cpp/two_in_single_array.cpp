#include<bits/stdc++.h>
using namespace std;

void check(int arr[],int n)
{
    int xr = arr[0]; /* Will hold xor of all elements */
    int set_bit_no;   /* Will have only single set bit of xor */
    int i;
    int x = 0;
    int y = 0;

    /* Get the xor of all elements */
    for (i = 1; i < n; i++)
        xr ^= arr[i];

    /* Get the rightmost set bit in set_bit_no */
    set_bit_no = xr&~ (xr-1);

    /* Now divide elements in two sets by comparing rightmost set 
   bit of xor with bit at same position in each element. */
    for (i = 0; i < n; i++)
    {
        if (arr[i] & set_bit_no)
            x = x ^ arr[i]; /*XOR of first set */
        else
            y = y ^ arr[i]; /*XOR of second set*/
    }
    cout<<x<<"\t"<<y<<endl;
}


int main()
{

    int ar[] = {2, 4, 6, 8, 10, 2, 6, 10 };

    check(ar,8);

    return 0;
}