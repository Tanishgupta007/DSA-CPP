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

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty!!!" << endl;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertNodeHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);

        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}

void insertatPos(Node *&head, Node *&tail, int position, int d)
{
    Node *curr = head;
    int cnt = 1;
    if (position == 1)
    {
        insertNodeHead(head, tail, d);
        return;
    }
    while (cnt < position - 1)
    {
        curr = curr->next;
        cnt++;
    }
    Node *newNode = new Node(d);
    newNode->next = curr->next;
    curr->next = newNode;
}

void deleteAthead(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is already empty";
    }
    Node *temp = head;

    head = head->next;
    temp->next = NULL;
    delete (temp);
}

void deleteAtPos(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "List is already empty!!!" << endl;
    }
    if (position == 1)
    {
        deleteAthead(head);
        return;
    }
    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;

    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }

    prev->next = curr->next;

    curr->next = NULL;
    delete (curr);
}

void deleteValue(Node *&head, Node *&tail, int value)
{
    Node *curr = head;
    Node *prev = NULL;

    if (head->data == value)
    {
        deleteAthead(head);
        return;
    }
    while (curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    curr->next = NULL;
    delete (curr);
}

Node *removeDuplicate(Node *head)
{
    Node *curr = head;

    if (head == NULL)
    {
        return head;
    }
    while (curr != NULL &&  curr->next != NULL)
    {

        if (curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete (nodeToDelete);

            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertNodeHead(head, tail, 10);
    insertNodeHead(head, tail, 20);
    insertNodeHead(head, tail, 20);
    insertNodeHead(head, tail, 30);
    insertNodeHead(head, tail, 40);
    insertNodeHead(head, tail, 40);

    // insertatPos(head,tail,3,69);
    print(head);
    removeDuplicate(head);
    print(head);
    // deleteAthead(head);

    // deleteAtPos(head,tail,3);
    // deleteValue(head,tail,20);
    // print(head);
}