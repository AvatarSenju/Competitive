#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left = NULL;
    Node *right = NULL;
};

Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
}

int maxSubTree(Node *root, map<int, int> &mp)
{
    if (root == NULL)
        return 0;
    int val = root->data;
    if (mp.find(val) != mp.end())
        return mp[val];
    mp[val] = max(maxSubTree(root->left, mp), maxSubTree(root->right, mp)) + val;
}

int MaxSum(Node *root, Node *parent, map<int, int> &mp)
{
    int val = root->data;
    int sub = maxSubTree(root, mp) + val;
    if (parent == NULL)
    {

        int left = MaxSum(root->left, root, mp);
        int right = MaxSum(root->right, root, mp);
        return max(max(sub, left), right);
    }

    if (parent->left == root)
    {
        int rem = parent->data;
        rem += maxSubTree(parent->right, mp);
        }
}

int main()

{

    return 0;
}