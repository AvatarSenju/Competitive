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
    return temp;
}

void rotate(Node *root, int k)
{
    int count = 0;
    Node *temp = root;
    while (count != k)
    {
        temp = temp->next;
        count++;
    }
    Node *back = root;
    while (temp->next != NULL)
    {
        temp = temp->next;
        back = back->next;
    }
    temp->next = root;
    root = back;
    back->next = NULL;
}

void print(Node *root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *root = newNode(1);
    root->next = newNode(2);
    root->next->next = newNode(3);
    root->next->next->next = newNode(4);
    root->next->next->next->next = newNode(5);
    print(root);
    rotate(root, 3);
    print(root);
}