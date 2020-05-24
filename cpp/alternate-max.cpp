#include <bits/stdc++.h>
using namespace std;

// long long int sumMax(vector<long long int> &vect, long long int k)
// {
//     long long int n = vect.size();
//     vector<long long int> peaks(0, n);
//     long long int countPeak = 0, sum = 0;
//     long long int flag = 0, flag1 = 0;
//     if (vect[0] > vect[1])
//     {
//         peaks[0] = 1;
//         countPeak++;
//     }

//     for (long long int i = 1; i < n; i++)
//     {
//         if (vect[i] > vect[i - 1])
//         {
//             flag1 = 1;
//         }
//         else if (vect[i] < vect[i + 1])
//         {
//             if (flag1 == 1)
//             {
//                 peaks[i] = 1;
//                 countPeak++;
//                 flag1 = 0;
//             }
//         }
//     }
//     if (flag1 == 1)
//     {
//         countPeak++;
//         peaks[n - 1] = 1;
//     }

//     if (countPeak > 2)
//     {
//         for (long long int i = 0; i < n; i++)
//         {
//             if (peaks[i] == 1)
//             {
//                 if (i == 0)
//                 {
//                     peaks[i - 1] = -1;
//                 }
//                 else if (i == n - 1)
//                     peaks[i - 1] = -1;
//                 else
//                 {
//                     peaks[i + 1] = -1;
//                     peaks[i - 1] = -1;
//                 }
//             }
//         }
//     }
//     else
//     {
//         if (vect[0] > vect[1])
//         {
//             for (long long int i = 0; i < n; i += 2)
//             {
//                 vect[i] *= k;
//             }
//         }
//         else
//         {
//             for (long long int i = n - 1; i >= 0; i--)
//             {
//             }
//         }
//     }
// }

long long int maxSum(vector<long long int> &vect, long long int k)
{
    priority_queue<pair<long long int, long long int>> pq;
    set<long long int> index;
    long long int sum = 0, prev, n = vect.size();
    int m = *min_element(vect.begin(), vect.end()) * (k - 1);

    if (k < 0 || m < 0)
    {

        return (accumulate(vect.begin(), vect.end(), 0) + m);
    }
    for (long long int i = 0; i < n; i++)
    {
        pq.push(make_pair(vect[i], i));
    }
    sum += pq.top().first * k;
    prev = pq.top().second;
    pq.pop();
    index.insert(prev);

    for (long long int i = 1; i < n; i++)
    {
        long long int val = pq.top().first, ind = pq.top().second, index1, index2;

        index1 = ind + 1;
        index2 = ind - 1;
        if (val < 0)
        {
            sum += val;
            pq.pop();
            continue;
        }

        if (index.find(index1) == index.end() && index.find(index2) == index.end())
        {

            sum += val * k;
            index.insert(ind);
            pq.pop();
        }
        else
        {
            sum += val;
            pq.pop();
        }
    }
    return sum;
}

long long int dpMax(vector<long long int> &vect, long long int k)
{
    int n = vect.size();
    long long int dp[n];
    int m = *min_element(vect.begin(), vect.end()) * (k - 1);

    if (k < 0 || m < 0)
    {

        return (accumulate(vect.begin(), vect.end(), 0) + m);
    }
    dp[0] = vect[0] * k;
    if (n > 1)
        dp[1] = max(dp[0] + vect[1], dp[0] / k + vect[1] * k);
    else
        return dp[0];

    for (int i = 2; i < n; i++)
    {
        
    }
}

int main()
{
    long long int n, k;
    // cin >> n >> k;
    k = 4;

    vector<long long int> vect{5, 3, 8, 5, 5, 9, 9, 9, 7, 2};
    // while (n--)
    // {
    //     long long int t;
    //     cin >> t;
    //     vect.push_back(t);
    // }

    cout << maxSum(vect, k) << endl;
    return 0;
}