#include <bits/stdc++.h>
using namespace std;

void luck(vector<int> &arr)
{
    map<int, int> freq;
    int n = arr.size();
    for (int i = 0; i < n; i++)

    {
        freq[arr[i]]++;
    }
    if (freq.begin()->second % 2 == 0)
        cout << "Unlucky" << endl;
    else
    {
        cout << "Lucky" << endl;
    }
}

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        vector<int> num(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        luck(num);
    }
    return 0;
}