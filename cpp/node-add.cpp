#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class list
{
private:
    node *head, *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }

    void display()
    {
        node *temp = new node;
        temp = head;
        while (temp->next != NULL)
        {
            cout << temp->data << "--->";
            temp = temp->next;
        }
        cout<< temp->data <<endl;
    }


    void make_node(int num)
    {
        node *temp = new node;
        temp->data = num % 10;
        temp->next = NULL;

        num /= 10;
        head = temp;
        
        while (num != 0)
        {
            temp = NULL;
            temp = new node;
            temp->data = num % 10;
            num /= 10;
            temp->next = head;
            head = temp;
            temp = NULL;
        }
        
    }

    void make_node_rev(int num)
    {
        node *temp = new node;
        temp->data = num %10;
        temp->next = NULL;
        head =temp;
        tail = temp;
        num/=10;

        while (num != 0)
        {
            temp = NULL;
            temp = new node;
            temp->data = num % 10;
            num /= 10;
            temp->next = NULL;
            tail->next = temp;
            tail = temp;
            temp = NULL;
        }
    }
};
int main()
{
    list obj;
    obj.make_node_rev(12345);
    obj.display();
    return 0;
}
