#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> vect{3, 2, 1};

    int prod = 1;
    for (int i = 0; i < vect.size(); i++)
        prod *= vect[i];

    vector<int> factors;

    for (int i = 1; i <= prod; i++)
    {
        if (prod % i == 0)
            factors.push_back(i);
    }

    reverse(factors.begin(), factors.end());

    for (int i = 0; i < vect.size(); i++)
    {
        cout << factors[vect[i] - 1] << " ";
    }

    return 0;
}