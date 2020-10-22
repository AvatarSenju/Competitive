#include <bits/stdc++.h>
using namespace std;

//Tree self mirror O(h)
bool ismirror(node *root1, node *root2)
{
    if (!root1 && !root2)
        return true;
    if (root1 && root2)
    {
        if (root1->data == root2->data)
            return ismirror(root1->left, root2->right) && ismirror(root1->right, root2->left);
    }
    return false;
}

//NGE O(n)|O(n)
vector<int> NGE(vector<int> &a)
{
    int n = a.size();
    stack<int> st;
    vector<int> res(n, -1);

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= a[i])
            st.pop();
        if (st.empty())
            res[i] = -1;
        else
            res[i] = st.top();

        st.push(a[i]);
    }
    return res;
}

//rotate array k O(n)|O(k)
void rotate(vector<int> &a, int k)
{
    int n = a.size();
    vector<int> temp(k, -1);
    for (int i = 0; i < k; i++)
        temp[i] = a[i];
    for (int i = k; i < n; i++)
        a[i - k] = a[i];
    for (int i = n - k; i < n; i++)
        a[i] = temp[i - (n - k)];
}

int main()
{

    return 0;
}
