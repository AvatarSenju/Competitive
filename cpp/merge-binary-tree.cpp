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

// Node *createBst(int data, Node *root)
// {
//     if (root == NULL)
//     {
//         return newNode(data);
//     }
//     int key = root->data;
//     if (key > data)
//         root->left = createBst(data, root->left);
//     else if (key < data)
//         root->right = createBst(data, root->left);
//     return root;
// }

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
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
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

    // Node *sb;
    // sb = createBst(50, sb);
    // createBst(30, sb);
    // createBst(20, sb);
    // createBst(40, sb);
    // createBst(70, sb);
    // createBst(60, sb);
    // createBst(80, sb);
    // inorder(sb);
}