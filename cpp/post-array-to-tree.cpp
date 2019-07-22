// For example, given the sequence 2, 4, 3, 8, 7, 5, you should construct the following tree :
//  5 / 3 7 / \ 2 4 8

#include <bits/stdc++.h>
using namespace std;
#define COUNT 10

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

Node *postToTree(vector<int> &vect, int high, int low)
{
    if (high < low)
        return NULL;
    if (high == low)
    {
        Node *temp = newNode(vect[high]);
        return temp;
    }
    if (high - low == 1)
    {
        Node *temp = newNode(vect[high]);
        temp->right = postToTree(vect, high - 1, low);
        return temp;
    }
    Node *temp = newNode(vect[high]);
    high--;
    int mid = (low + high) / 2;
    temp->right = postToTree(vect, high, mid + 1);

    temp->left = postToTree(vect, mid, low);
    return temp;
}

// Function to print binary tree in 2D
// It does reverse inorder traversal
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
    vector<int> vect{2, 4, 3, 1, 8, 7, 5};
    Node *root = postToTree(vect, 6, 0);
    // printLevelOrder(root);
    print2D(root);
    return 0;
}