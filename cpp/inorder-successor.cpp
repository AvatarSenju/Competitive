#include <bits/stdc++.h>
using namespace std;
#define COUNT 10

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node *parent;
};

int minValue(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
        temp = temp->left;
    return temp->data;
}

int inorderSuccessor(Node *n)
{
    if (n->right != NULL)
    {
        return minValue(n->right);
    }

    Node *p = n->parent;
    while (p != NULL && n == p->right)
    {
        n = p;
        p = n->parent;
    }
    return p->data;
}

Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;
    temp->parent = NULL;
    return temp;
}

Node *insert(Node *root, int key)
{
    if (root == NULL)
        return newNode(key);
    if (key < root->data)
        root->left = insert(root->left, key);
    else if (key > root->data)
        root->right = insert(root->right, key);

    /* return the (unchanged) root pointer */
    return root;
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

void print2DUtil(Node *root, int space)
{
    // Base case
    if (root == NULL)
        return;

    // Increase distance between levels
    space += COUNT;

    // Process right child first
    print2DUtil(root->right, space);

    // Print current node after space
    // count
    cout << endl;
    for (int i = COUNT; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    // Process left child
    print2DUtil(root->left, space);
}

// Wrapper over print2DUtil()
void print2D(Node *root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}

int main()
{
    Node *root = NULL, *temp = NULL;
    // root = insert(root, 5);
    root = insert(root, 20);
    insert(root, 22);
    insert(root, 8);
    insert(root, 4);
    insert(root, 12);
    insert(root, 10);
    insert(root, 14);
    temp = root->left;
    // print2D(root);

    cout << "inorder successor of" << temp->data << "=" << inorderSuccessor(temp) << endl;

    return 0;
}