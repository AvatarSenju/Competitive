#include <bits/stdc++.h>
using namespace std;

void build_min(vector<int> &ar, vector<int> &tree)
{
    int n = ar.size();

    for (int i = 0; i < n; i++)
    {
        tree[n + i] = ar[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        tree[i] = min(tree[i << 1], tree[i << 1 | 1]);
    }
}

int query(int l, int r, vector<int> &tree, int n)
{
    int res = 1e5;

    for (l += n, r += n; l < r; l >>= 1, r >>= 1)
    {
        if (l & 1)
            res = min(res, tree[l++]);
        if (r & 1)
            res = min(res, tree[--r]);
    }
    return res;
}

int main()
{

    vector<int> a = {2, 6, 10, 4, 7, 28, 9, 11, 6, 33};
    int n = a.size();

    vector<int> segtree(2 * n);
    build_min(a, segtree);

    // compute minimum in the range left to right
    int left = 0, right = 5;
    cout << "Minimum in range " << left << " to "
         << right << " is " << query(left, right + 1, segtree, n) << "\n";

    // update the value of index 3 to 1
    int index = 3, value = 1;

    // a[3] = 1;
    // Contents of array : {2, 6, 10, 1, 7, 28, 9, 11, 6, 33}
    // update(segtree, index, value, n); // point update

    // // compute minimum in the range left to right
    // left = 2, right = 6;
    // cout << "Minimum in range " << left << " to "
    //      << right << " is " << range_query(segtree, left, right + 1, n) << "\n";

    return 0;
}