#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
#define rep(i, a, b) for (i = a; i < b; i++)
#define repr(i, a, b) for (i = a; i >= b; i--)
#define F first
#define S second
#define p_b push_back
#define m_p make_pair
#define all(a) (a).begin(), (a).end()

int recur(string s, int k, int n, int c, int i, int w, vector<vector<int>> &dp)
{
    if (n == i)
    {
        if (c == 0)
            return 1;
        return 0;
    }
    if (k == 0)
    {
        if (c != 0)
            return 0;
        else
        {
            if (s[i - w] == '0')
                c++;
            else
                c--;
            if (s[i] == '0')
                return recur(s, k, n, c - 1, i + 1, w, dp);
            else if (s[i] == '1')
                return recur(s, k, n, c + 1, i + 1, w, dp);
            else
            {
                s[i] = '1';
                bool t = recur(s, k, n, c + 1, i + 1, w, dp);
                s[i] = '0';
                bool f = recur(s, k, n, c - 1, i + 1, w, dp);
                return (t || f);
            }
        }
    }
    else
    {
        if (s[i] == '0')
            return recur(s, k - 1, n, c - 1, i + 1, w, dp);
        else if (s[i] == '1')
            return recur(s, k - 1, n, c + 1, i + 1, w, dp);
        else
        {
            s[i] = '1';
            int t = recur(s, k - 1, n, c + 1, i + 1, w, dp);
            s[i] = '0';
            int f = recur(s, k - 1, n, c - 1, i + 1, w, dp);
            return (t || f);
        }
    }
    return 0;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    // n = 16;
    // k = ((rand() % 8) + 1) * 2;
    string s;
    cin >> s;
    if (k & 1)
    {
        cout << "NO";
        return;
    }

    vector<vector<int>> dp;
    int sol = recur(s, k, n, 0, 0, k, dp);
    // cout << (sol ? "YES" : "NO") << "-- ";
    // return;

    int l = 0;
    int c = 0, q = 0;
    queue<int> qu;
    // for (int i = 0; i < k; i++)
    // {
    //     if (s[i] == '1')
    //     {
    //         if (qu.empty())
    //             c++;
    //         else
    //         {
    //             s[qu.front()] = '0';
    //             qu.pop();
    //             q--;
    //         }
    //     }
    //     else if (s[i] == '0')
    //     {
    //         if (qu.empty())
    //             c--;
    //         else
    //         {
    //             s[qu.front()] = '1';
    //             qu.pop();
    //             q--;
    //         }
    //     }
    //     else
    //     {
    //         if (c > 0)
    //         {
    //             s[i] = '0';
    //             c--;
    //         }
    //         else if (c < 0)
    //         {
    //             s[i] = '1';
    //             c++;
    //         }
    //         else
    //         {
    //             q++;
    //             qu.push(i);
    //         }
    //     }
    // }

    for (int i = 0; i < k; i++)
    {
        if (s[i] == '1')
            c++;
        else if (s[i] == '0')
            c--;
        else
        {
            q++;
            qu.push(i);
        }
    }
    // if (c != 0 || q % 2 != 0)
    // {
    //     cout << "NO";
    //     return;
    // }
    if (c > 0)
    {
        while (c > 0 && !qu.empty())
        {
            s[qu.front()] = '0';
            q--;
            qu.pop();
            c--;
        }
    }
    else if (c < 0)
    {
        while (c < 0 && !qu.empty())
        {
            s[qu.front()] = '1';
            q--;
            qu.pop();
            c++;
        }
    }
    if ((c == 0 && q % 2 != 0) || (c != 0 && ((q > 0 && (q - (abs(c))) % 2 != 0) || q <= 0)))
    {
        // cout << "NO";
        if (l != sol)
            cout << s << " " << k << " -- " << l << " " << sol;

        return;
    }
    for (int i = k; i < n; i++)
    {
        int a = i - k;
        if (s[a] == '1')
            c--;
        else if (s[a] == '0')
            c++;
        else
        {
            q--;
            qu.pop();
        }

        if (s[i] == '1')
        {
            c++;
            // if (qu.empty())
            //     c++;
            // else
            // {
            //     s[qu.front()] = '0';
            //     qu.pop();
            //     q--;
            // }
        }
        else if (s[i] == '0')
        {
            c--;
            // if (qu.empty())
            //     c--;
            // else
            // {
            //     s[qu.front()] = '1';
            //     qu.pop();
            //     q--;
            // }
        }
        else
        {
            // if (c > 0)
            // {
            //     s[i] = '0';
            //     c--;
            // }
            // else if (c < 0)
            // {
            //     s[i] = '1';
            //     c++;
            // }
            // else
            // {
            q++;
            qu.push(i);
            // }
        }
        if (c > 0)
        {
            while (c > 0 && !qu.empty())
            {
                s[qu.front()] = '0';
                q--;
                qu.pop();
                c--;
            }
        }
        else if (c < 0)
        {
            while (c < 0 && !qu.empty())
            {
                s[qu.front()] = '1';
                q--;
                qu.pop();
                c++;
            }
        }
        if ((c == 0 && q % 2 != 0) || (c != 0 && ((q > 0 && (q - (abs(c))) % 2 != 0) || q <= 0)))
        {
            // cout << "NO";
            if (l != sol)
                cout << s << " " << k << " -- " << l << " " << sol;

            return;
        }
        // if (c != 0 || q % 2 != 0)
        // {
        //     cout << "NO";
        //     return;
        // }
        // if (s[i] == '1')
        //     c++;
        // else if (s[i] == '0')
        //     c--;
        // else
        //     q++;

        // if ((c == 0 && q % 2 != 0) || (c != 0 && ((q > 0 && (q - (abs(c))) % 2 != 0) || q <= 0)))
        // {
        //     cout << "NO";
        //     return;
        // }
    }
    // cout << "YES";
    l = 1;
    if (l != sol)
        cout << s << " " << k << " -- " << l << " " << sol;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}
