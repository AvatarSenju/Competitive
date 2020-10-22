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

void shiftS(vector<int> &ar, int j)
{
    int temp = ar[j];
    for (int i = j; i > 0; i--)
        ar[i] = ar[i - 1];
    ar[0] = temp;
}
void shiftE(vector<int> &ar, int j)
{
    int n = ar.size();
    int temp = ar[j];
    for (int i = j; i < n - 1; i++)
        ar[i] = ar[i + 1];
    ar[n - 1] = temp;
}
void print(vector<int> ar)

{
    cout << "\n";

    for (auto v : ar)
        cout << v << " ";
}
void solve()
{
    int n;
    cin >> n;
    int count1 = 0, count2 = 0;
    vector<int> ar(n, 0);
    vector<int> ar1(n, 0);
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    for (int i = 0; i < n; i++)
        ar1[i] = ar[i];

    for (int i = 1; i < n; i++)
    {
        print(ar);
        if (ar[i] < ar[i - 1])
        {
            cout << "hi";
            count1++;
            if (ar[i] < ar[0])
                shiftS(ar, i);
            else
                shiftE(ar, i - 1);
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (ar1[i] < ar1[i - 1])
        {
            count2++;
            if (ar1[i] > ar1[n - 1])
                shiftE(ar, i);
            else
                shiftS(ar, i - 1);
        }
    }
    cout << min(count1, count2);
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