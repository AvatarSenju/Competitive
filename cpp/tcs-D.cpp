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

void spiralRotate(vector<vector<int>> &mat, int M, int N, int k)
{
    // Create a temporary array to store the result
    int temp[M * N];

    /*      s - starting row index 
            m - ending row index 
            l - starting column index 
            n - ending column index;  */
    int m = M, n = N, s = 0, l = 0;

    int *start = temp; // Start position of current ring
    int tIdx = 0;      // Index in temp
    while (s < m && l < n)
    {
        // Initialize end position of current ring
        int *end = start;

        // copy the first row from the remaining rows
        for (int i = l; i < n; ++i)
        {
            temp[tIdx++] = mat[s][i];
            end++;
        }
        s++;

        // copy the last column from the remaining columns
        for (int i = s; i < m; ++i)
        {
            temp[tIdx++] = mat[i][n - 1];
            end++;
        }
        n--;

        // copy the last row from the remaining rows
        if (s < m)
        {
            for (int i = n - 1; i >= l; --i)
            {
                temp[tIdx++] = mat[m - 1][i];
                end++;
            }
            m--;
        }

        /* copy the first column from the remaining columns */
        if (l < n)
        {
            for (int i = m - 1; i >= s; --i)
            {
                temp[tIdx++] = mat[i][l];
                end++;
            }
            l++;
        }

        // if elements in current ring greater than
        // k then rotate elements of current ring
        if (end - start > k)
        {
            // Rotate current ring using revarsal
            // algorithm for rotation
            reverse(start, start + k);
            reverse(start + k, end);
            reverse(start, end);

            // Reset start for next ring
            start = end;
        }
        else // There are less than k elements in ring
            break;
    }
}

void anti(vector<vector<int>> &a, int i, int m, int n, int l)
{
}
void clo(vector<vector<int>> &a, int i, int m, int n, int l)
{
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int l = min(m, n);
    vector<int> L;
    for (int i = 0; i < l; i++)
    {
        int x;
        cin >> x;
        x %= 4;
        L.push_back(x);
    }
    for (int i = 0; i < l; i++)
    {
        if (i % 2 == 0)
            anti(a, i, m, n, L[i]);
        else
            clo(a, i, m, n, L[i]);
    }
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