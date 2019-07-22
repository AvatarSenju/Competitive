#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

void findSum(Node *root, map<int, int> &mp, int k)
{
    if (root == NULL)
        return;
    mp[k] += root->data;
    findSum(root->left, mp, k - 1);
    findSum(root->right, mp, k + 1);
}

void findLineSum(Node *root, int k)
{
    map<int, int> mp;
    findSum(root, mp, 0);
    for (auto m : mp)
        cout << m.first << "-->" << m.second << endl;
}

int main()
{

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->left->left = newNode(6);
    root->right->right = newNode(5);
    findLineSum(root, 0);
    return 0;
}