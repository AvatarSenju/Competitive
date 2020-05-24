#include <bits/stdc++.h>
using namespace std;
#define COUNT 10

class Node
{

public:
    char data;
    Node *right;
    Node *left;
};

Node *newNode(char data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void mirror(Node *root)
{
    if (root == NULL)
        return;
    Node *temp = root->right;
    root->right = root->left;
    root->left = temp;
    mirror(root->left);
    mirror(root->right);
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

    Node *root = newNode('a');
    root->left = newNode('b');
    root->right = newNode('c');
    root->left->left = newNode('d');
    root->left->right = newNode('e');
    root->right->left = newNode('f');
    print2D(root);
    mirror(root);
    cout << endl;
    print2D(root);
    return 0;
}