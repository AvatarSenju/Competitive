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

int Fsum(string s)
{
    int score = 0;
    int n = s.length();
    if (s[0] == 'W')
        score = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == 'W')
        {
            if (s[i - 1] == 'W')
                score += 2;
            else
                score++;
        }
    }
    return score;
}

void solve2()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int last = 0;
    // if (s[0] == 'W')
    //     last = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            last = i;
            break;
        }
    }

    map<int, vector<int>> mp;
    vector<int> pos(n, n);
    for (int i = last; i < n; i++)
    {
        if (s[i] == 'W')
        {
            pos[i] = last;
            last = i;
            mp[i - pos[i] - 1].push_back(i);
        }
    }
    // for (auto i : pos)
    //     cout << i << " ";
    // cout << "\n";
    for (auto i : mp)
    {
        if (i.first <= 0)
            continue;
        if (k <= 0)
            break;
        for (auto j : i.second)
        {
            for (int h = j - 1; h >= 0 && s[h] != 'W' && k > 0; h--)
            {
                s[h] = 'W';
                k--;
            }
        }
    }
    // int start=mp[0]
    if (k > 0)
    {
        last++;
        while (k > 0 && last < n)
        {
            s[last] = 'W';
            last++;
            k--;
        }
    }

    if (k > 0)
    {
        if (mp.find(0) != mp.end())
        {
            for (auto j : mp[0])
            {
                for (int h = j - 1; h >= 0 && s[h] != 'W' && k > 0; h--)
                {
                    s[h] = 'W';
                    k--;
                }
            }
        }
    }
    if (k > 0)
    {
        if (mp.find(-1) != mp.end())
        {
            for (auto j : mp[-1])
            {
                for (int h = j - 1; h >= 0 && s[h] != 'W' && k > 0; h--)
                {
                    s[h] = 'W';
                    k--;
                }
            }
        }
    }

    if (k > 0)
    {
        for (int i = 0; i < n && k > 0; i++)
        {
            if (s[i] == 'L')
            {
                s[i] = 'W';
                k--;
            }
        }
    }
    int sum = Fsum(s);
    // cout << s << "\n";
    cout << sum;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int flag = 0;
    if (s[0] == 'W')
        flag = 1;

    for (int i = 1; i < n - 1 && k > 0; i++)
    {
        if (s[i] == 'L')
        {
            if (s[i - 1] == 'W' && s[i + 1] == 'W')
            {
                s[i] = 'W';
                k--;
            }
        }
    }

    string s1 = s, s2 = s;
    for (int i = 1; i < n && k > 0; i++)
    {
        if (s1[i] == 'L')
        {
            if (s1[i - 1] == 'W')
            {
                s1[i] = 'W';
                k--;
            }
        }
    }
    int sums1 = Fsum(s1);

    for (int i = n - 2; i >= 0 && k > 0; i--)
    {
        if (s2[i] == 'L')
        {
            if (s2[i + 1] == 'W')
            {
                s2[i] = 'W';
                k--;
            }
        }
    }
    int sums2 = Fsum(s2);
    if (sums1 > sums2)
    {
    }
    for (int i = 0; i < n && k > 0; i++)
        if (s[i] == 'L')
        {
            s[i] = 'W';
            k--;
        }
    int score = Fsum(s);
    cout << score;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve2();
        cout << "\n";
    }

    return 0;
}