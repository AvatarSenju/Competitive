#define ll long long
#include <bits/stdc++.h>
using namespace std;

ll findMin(vector<ll> &vect)
{

    ll count = 0, neg = 0, zeroFlag = 0;
    ll n = vect.size();
    for (ll i = 0; i < n; i++)
    {
        if (vect[i] < 0)
            neg++;
        if (vect[i] == 0)
            zeroFlag = 1;
    }

    for (ll i = 0; i < n; i++)
    {
        ll cur = abs(vect[i]);
        if (cur == 0)
        {
            count += 1;
            continue;
        }

        cur--;

        cur = abs(cur);
        count += cur;
    }
    if (neg % 2 != 0)
    {
        if (zeroFlag == 0)
            count += 2;
    }
    return count;
}

int main()
{
    ll n = 0;
    cin >> n;

    // vector<ll> vect{-2, -1, 1, 2};
    vector<ll> vect(n);
    for (ll i = 0; i < n; i++)
    {

        cin >> vect[i];
    }
    cout << findMin(vect) << endl;

    return 0;
}