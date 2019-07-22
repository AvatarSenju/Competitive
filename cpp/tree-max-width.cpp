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
void maxWidth(Node *root)
{
    int max_width = 1;
    queue<Node *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        if (qu.size() > max_width)
            max_width = qu.size();
        Node *temp = qu.front();
        qu.pop();
        // cout << temp->data << " ";
        if (temp->left != NULL)
            qu.push(temp->left);
        if (temp->right != NULL)
            qu.push(temp->right);
    }
    cout << max_width << endl;
}

int main()
{

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->left->left = newNode(6);
    root->right->right = newNode(5);
    root->right->left = newNode(7);
    maxWidth(root);

    return 0;
}