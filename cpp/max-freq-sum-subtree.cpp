#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
    Node *left;
};

map<int, int> maxSubTree;

Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

int findMax(Node *root)
{
    if (root == NULL)
        return 0;
    int sum = root->data + findMax(root->left) + findMax(root->right);
    maxSubTree[sum]++;
    return sum;
}

int main()
{
    Node *root = newNode(5);
    root->left = newNode(2);
    root->right = newNode(-5);
    findMax(root);
    int maxVal = INT_MIN, maxKey;
    for (auto m : maxSubTree)
    {
        if (m.second > maxVal)
            maxKey = m.first;
    }
    cout << maxKey << endl;

    return 0;
}