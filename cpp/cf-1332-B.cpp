#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        vector<int> ar(n, 0);
        vector<int> gc(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        vector<int> ch(n, 0);
        map<int, set<int>> mp;

        int a = 1, flag = 0;
        // ch[0] = 1;
        for (int j = 0; j < n; j++)
        {
            /* code */
            if (ch[j] != 0)
                continue;

            for (int i = j; i < n; i++)
            {
                if (ch[i] != 0)
                    continue;

                if (mp[a].empty())
                {
                    mp[a].insert(ar[i]);
                    ch[i] = 1;

                    continue;
                }
                for (auto el : mp[a])
                {
                    if (__gcd(ar[i], el) <= 1)
                        flag = 1;
                }
                if (flag == 1)
                {

                    flag = 0;
                    continue;
                }
                else
                {
                    mp[a].insert(ar[i]);
                    ch[i] = 1;
                }

                flag = 0;

                // for (int j = i; j < n; j++)
                // {
                //     if (ch[j] != 0)
                //         continue;
                //     if (__gcd(ar[i], ar[j]) > 1)
                //     {
                //         ch[j] = a;
                //         gc[j] = __gcd(ar[i], ar[j]);
                //     }
                // }
                // a++;
            }
            a++;
        }
        // cout << *max_element(ch.begin(), ch.end()) << "\n";
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << " ";
            for (auto el : mp[it->first])
            {

                cout << el << "  -- ";
            }
            cout << "\n";
        }
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << ch[i] << " ";
        //     }
        //     cout << "\n";
        //     for (int i = 0; i < n; i++)
        //     {
        //         cout << gc[i] << " ";
        //     }
        //     cout << "\n";
    }

    return 0;
}