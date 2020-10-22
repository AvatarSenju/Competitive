#include <bits/stdc++.h>
using namespace std;

int comp(vector<double> &a, vector<double> &b)
{

    int res = 0;
    int n = a.size();
    for (int i = 1; i < n; i++)
    {
        if ((a[i] < b[i] && a[i - 1] > b[i - 1]) || (a[i] > b[i] && a[i - 1] < b[i - 1]))
        {
            res++;
            cout << i << " ";
        }
    }
    return res;
}

vector<double> avgr(vector<double> &a, int x)
{
    double s = 0;
    int i = 0;
    int n = a.size();
    vector<double> res;

    for (; i < x; i++)
    {
        s += a[i];
        res.push_back(0);
    }
    res.pop_back();
    double avg = s / x;
    res.push_back(avg);

    for (; i < n; i++)
    {
        s -= a[i - x];
        s += a[i];
        avg = s / x;
        res.push_back(avg);
    }
    return res;
}

void solve()
{
    int x, y, n;
    cin >> x >> y;
    cin >> n;
    vector<double> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<double> X = avgr(a, x);
    vector<double> Y = avgr(a, y);
    cout << comp(X, Y);
}

int main()
{

    solve();
    cout << "\n";

    return 0;
}