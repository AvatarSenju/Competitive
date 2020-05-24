#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *newNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
}

void printNode(Node *root)
{
    Node *cur = root;
    while (cur != NULL)
    {
        cout << cur->data << " --> ";
        cur = cur->next;
    }
    cout << endl;
}

Node *reverse(Node *root)
{
    Node *Current = root, *Previous = NULL;
    while (Current != NULL)
    {
        Node *Next = root->next;

        Current->next = Previous;
        Previous = Current;
        Current = Next;

        root = Current;
    }
    return Previous;
}

int main()
{

    Node *root = newNode(1);
    root->next = newNode(2);
    root->next->next = newNode(3);
    root->next->next->next = newNode(4);
    root->next->next->next->next = newNode(5);
    printNode(root);
    root = reverse(root);
    printNode(root);
    return 0;
}