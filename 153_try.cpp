#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertAtNode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;

        newNode->next = newNode;
    }
    else
    {
        // non empty
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *newNode = new Node(d);

        newNode->next = curr->next;
        curr->next = newNode;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;

    if (temp == NULL)
    {
        cout << "List is empty";
    }
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != tail);
    cout << "X";
}

void deleteNode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "list is empty!";
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // only one element
        if (curr == prev)
        {
            tail = NULL;
        }

        if (curr == tail)
        {
            tail = curr->next;
        }

        curr->next = NULL;

        delete curr;
    }
}
int main()
{
    Node *tail = NULL;
    insertAtNode(tail, 5, 10);
    insertAtNode(tail, 10, 15);
    insertAtNode(tail, 15, 25);
    print(tail);

    cout << endl;

    deleteNode(tail, 25);
    print(tail);
}