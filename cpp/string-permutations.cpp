#include <bits/stdc++.h>
using namespace std;

void perm(vector<char> s, int start, int n, vector<vector<char>> &res)
{
    // int i;
    if (start == n)
    {
        res.push_back(s);
        return;
    }
    for (int i = start; i <= n; i++)
    {
        swap(s[start], s[i]);
        perm(s, start + 1, n, res);
        swap(s[start], s[i]);
    }
}
void permute(string a, int start, int n)
{
    // Base case
    if (start == n)
        cout << a << endl;
    else
    {
        // Permutations made
        for (int i = start; i <= n; i++)
        {

            // Swapping done
            swap(a[start], a[i]);

            // Recursion called
            permute(a, start + 1, n);

            //backtrack
            swap(a[start], a[i]);
        }
    }
}

int main()
{

    vector<char> s{'A', 'B', 'C'};
    int n = s.size();
    vector<vector<char>> res;
    perm(s, 0, n - 1, res);
    for (auto i : res)

    {
        for (auto c : i)
            cout << c;
        cout << endl;
    }
    cout << endl;
    permute("ABC", 0, n - 1);

    return 0;
}
