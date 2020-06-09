#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *right;
    Node *left;
    int data;
};

Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}

Node *insert(Node *node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->data)
        node->left = insert(node->left, key);
    else if (key > node->data)
        node->right = insert(node->right, key);

    /* return the (unchanged) node pointer */
    return node;
}

void inorder(Node *root)
{
    if (!root)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int difVal = 1e6, difNode = -1;
void closest(Node *root, int k)
{
    if (root == NULL)
        return;

    if (abs(root->data - k) < difVal)
    {
        difVal = abs(root->data - k);
        difNode = root->data;
    }
    closest(root->left, k);
    closest(root->right, k);
}

int main()
{
    Node *root;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    inorder(root);

    closest(root, 36);
    cout << "\n"
         << difNode << "\n";
    // closest(root,50);
    // closest(root,36);
}