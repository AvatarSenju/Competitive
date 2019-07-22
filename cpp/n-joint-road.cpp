#include <bits/stdc++.h>
using namespace std;

long long int min(vector<long long int> &w)
{
    long long int sum = 0;
    priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
    for (auto it : w)
        pq.push(it);
    while (pq.size() > 1)
    {
        long long int a = pq.top();
        pq.pop();
        long long int b = pq.top();
        pq.pop();
        long long int s = a + b;
        sum += s;
        pq.push(s);
    }
    return sum;
}

int main()
{

    long long int sum = 0, n;
    cin >> n;
    vector<long long int> w;
    for (long long int i = 0; i < n; i++)
    {
        long long int t;
        cin >> t;
        w.push_back(t);
    }

    cout << min(w) << endl;

    return 0;
}