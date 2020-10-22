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

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first && a.second != b.second;
}

void solve()
{
    int r, g, b;
    cin >> r >> g >> b;
    vector<int> ra(r, 0);
    vector<int> ga(g, 0);
    vector<int> ba(b, 0);
    for (int i = 0; i < r; i++)
        cin >> ra[i];
    for (int i = 0; i < g; i++)
        cin >> ga[i];
    for (int i = 0; i < b; i++)
        cin >> ba[i];
    sort(all(ra));
    sort(all(ba));
    sort(all(ga));
    vector<int> res;

    ll area = 0;

    // int i = r - 1, j = g - 1, k = b - 1;
    // while (i >= 0 && j >= 0 && k >= 0)
    // {
    //     if (ra[i] < ga[j] && ra[i] < ba[k])
    //     {
    //         res.push_back(ra[i]);
    //         area += (ga[j] * ba[k]);
    //         j--;
    //         k--;
    //     }
    //     else if (ga[j] < ra[i] && ga[j] < ba[k])
    //     {
    //         res.push_back(ga[j]);
    //         area += (ra[i] * ba[k]);
    //         i--;
    //         k--;
    //     }
    //     else
    //     {
    //         area += (ra[i] * ga[j]);
    //         i--;
    //         j--;
    //     }
    // }
    // if (i < 0)
    // {
    //     while (j >= 0 && k >= 0)
    //     {
    //         area += (ga[j] * ba[k]);
    //         j--;
    //         k--;
    //     }
    // }
    // else if (j < 0)
    // {
    //     while (i >= 0 && k >= 0)
    //     {
    //         area += (ra[i] * ba[k]);
    //         i--;
    //         k--;
    //     }
    // }
    // else
    // {
    //     while (j >= 0 && i >= 0)
    //     {
    //         area += (ga[j] * ra[i]);
    //         j--;
    //         i--;
    //     }
    // }
    // cout << area;
    area = 0;
    vector<pair<int, int>> p;
    priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
    for (auto i : ra)
        pq.push(m_p(i, 0));
    for (auto i : ga)
        pq.push(m_p(i, 1));
    for (auto i : ba)
        pq.push(m_p(i, 2));
    sort(all(p));
    while (!pq.empty())
    {
        int a = pq.top().first;
        int b = pq.top().second;
        pq.pop();
        if (pq.empty())
            break;
        stack<pair<int, int>> st;

        while (pq.top().second == b && !pq.empty())
        {
            st.push(pq.top());
            pq.pop();
        }
        if (pq.empty())
            break;
        area += (a * pq.top().first);
        pq.pop();
        while (!st.empty())
        {
            pq.push(st.top());
            st.pop();
        }
    }
    cout << area;

    //     int a = p[i];
    // }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    return 0;
}