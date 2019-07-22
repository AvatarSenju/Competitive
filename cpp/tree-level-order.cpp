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
void printLevelOrder(Node *root)
{
    queue<Node *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        Node *temp = qu.front();
        qu.pop();
        cout << temp->data << " ";
        if (temp->left != NULL)
            qu.push(temp->left);
        if (temp->right != NULL)
            qu.push(temp->right);
    }
}

int main()
{

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->left->left = newNode(6);
    root->right->right = newNode(5);
    printLevelOrder(root);

    return 0;
}