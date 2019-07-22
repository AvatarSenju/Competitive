#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void delete_last(Node *head, int k)
{

    Node *first = head;
    Node *second = head;

    for (int i = 0; i < k + 1; i++)
    {
        first = first->next;
    }

    while (first != NULL)

    {
        first = first->next;
        second = second->next;
    }
    second->next = second->next->next;
}

int main()
{

    return 0;
}