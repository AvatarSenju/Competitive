#include <bits/stdc++.h>
using namespace std;

void createEdge(map<int, vector<pair<int, int>>> &mp, int u, int v, int k)
{
    mp[u].push_back(make_pair(v, k));
    mp[v].push_back(make_pair(u, k));
}

void createMinSpan(map<int, vector<pair<int, int>>> &gp, map<int, vector<pair<int, int>>> &minSpan, int start)
{
    int n = gp.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(start);
    while (n--)
    {
        }
}