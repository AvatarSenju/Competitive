#include <bits/stdc++.h>
using namespace std;

vector<int> dif(vector<int> a, vector<int> b)
{

    int diab = 1e6, ai, bj;
    int i = 0, j = 0, n = a.size(), m = b.size();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (n < 1 || m < 1)
        return {};
    while (i < n && j < m)
    {
        if (a[i] == b[j])
            return {a[i], b[j]};
        if (abs(a[i] - b[j]) < diab)
        {
            ai = a[i];
            bj = b[j];
            diab = abs(a[i] - b[j]);
        }
        if (a[i] < b[j])
            ++i;
        else
            ++j;
    }

    return {ai, bj};
}

int main()
{

    vector<int> a{-1, 5, 10, 20, 28, 3};
    vector<int> b{26, 134, 135, 15, 17};
    vector<int> res(dif(a, b));
    for (int i : res)
        cout << i << " ";
    return 0;
}