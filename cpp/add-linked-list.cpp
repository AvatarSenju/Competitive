#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class List
{

public:
    Node *head, *tail;
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void createnode(int value)
    {
        Node *temp = new Node();
        temp->data = value;
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    void display()
    {
        Node *temp = new Node();
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "-->";
            temp = temp->next;
        }
    }
};

// Node *newNode(int data)
// {
//     Node *temp = new Node();
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }

// Node *create(Node **root, int data)
// {
//     Node *temp = newNode(data);
//     Node *p = root;
//     while (p != NULL)
//     {
//         p = p->next;
//     }
//     p = temp;
//     return root;
// }

List add(List a, List b)

{
    int carry = 0;
    // Node *temp = NULL;
    List res = List();

    while (a.head != NULL && b.head != NULL)
    {
        int sum = ((a.head->data) + (b.head->data) + carry) % 10;
        carry = ((a.head->data) + (b.head->data) + carry) / 10;
        res.createnode(sum);
        a.head = a.head->next;
        b.head = b.head->next;
    }
    while (a.head != NULL)
    {
        int sum = ((a.head->data) + carry) % 10;
        carry = ((a.head->data) + carry) / 10;
        res.createnode(sum);
        a.head = a.head->next;
        // b.head = b.head->next;
    }
    while (b.head != NULL)
    {
        int sum = ((b.head->data) + carry) % 10;
        carry = ((b.head->data) + carry) / 10;
        res.createnode(sum);
        b.head = b.head->next;
        // b.head = b.head->next;
    }
    return res;
}

void printLL(Node *root)
{
    while (root != NULL)
    {
        cout << root->data << "-->";
        root = root->next;
    }
}

int main()
{
    List a = List();
    List b = List();
    a.createnode(2);
    a.createnode(4);
    a.createnode(3);
    b.createnode(5);
    b.createnode(6);
    b.createnode(4);
    List res = add(a, b);
    res.display();

    return 0;
}