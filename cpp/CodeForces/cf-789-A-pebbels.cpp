#define ll long long
#include <bits/stdc++.h>
using namespace std;

ll findDays(vector<ll> &peb, ll k)
{
    // if (k == 1)
    //     return ceil((float)accumulate(peb.begin(), peb.end(), 0) / 2);
    // priority_queue<ll> pq;
    ll n = peb.size();
    // for (ll i = 0; i < n; i++)
    //     pq.push(peb[i]);

    ll countDays = 0, i = 0;
    while (i < n)
    {

        ll a = peb[i];
        if (a <= 0)
        {
            i++;
            continue;
        }
        // peb.pop_back();
        a = a - k;
        peb[i] = a;
        countDays++;
        // if (peb.empty())
        //     break;
        // ll b = peb.back();
        // peb.pop_back();
        // b = b - k;
        // if (b > 0)
        //     peb.push_back(b);
    }
    return ceil((float)countDays / 2);
}

int main()
{
    ll n = 0, k = 0;
    cin >> n >> k;

    vector<ll> peb(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> peb[i];
    }

    cout << findDays(peb, k) << endl;
    return 0;
}