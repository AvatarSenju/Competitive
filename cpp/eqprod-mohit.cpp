#include <bits/stdc++.h>
#include <iostream>

using namespace std;
typedef long long ll;

int main()
{

    ll n, count, f, i, j, k;
    cin >> n;
    vector<ll> v(n);
    k = n;
    for (j = 0; j < n; j++)
    {
        cin >> v[j];
    }
    while (k--)
    {
        count = 0;
        f = 0;

                // v.push_back(temp);
        cout << "hii" << endl;
        for (i = 0; i < n; i++)
        {
            if (v[i] > 0)
            {
                while (v[i] != 1)
                {
                    v[i] = v[i] - 1;
                    count++;
                }
            }

            else if (v[i] < 0)
            {
                while (v[i] != -1)
                {
                    v[i] = v[i] + 1;
                    count++;
                }

                f++;
            }

            else
            {
                if (n % 2 == 0 && f % 2 == 0 && v[i] == 0)
                {
                    v[i] = v[i] + 1;
                    count++;
                }

                else if (n % 2 != 0 && f % 2 != 0 && v[i] == 0)
                {
                    v[i] = v[i] - 1;
                    count++;
                }

                else
                {
                    if (n % 2 == 0 && f % 2 != 0)
                    {
                        count = count + 2;
                    }

                    else if (n % 2 != 0 && f % 2 != 0)
                    {
                        count = count + 2;
                    }

                    break;
                }
            }
        }
    }

    cout << count << endl;
}