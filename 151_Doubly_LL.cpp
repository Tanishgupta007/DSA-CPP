#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }cout<<endl;
}

int getLen(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}

void insertAtHead(Node *&head, Node *&tail, int d)
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
        head->prev = temp;

        head = temp;
    }
}
void insertAtTail(Node *&tail, Node *&head, int d)
{

    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);

        tail->next = temp;
        // temp->next = NULL;//can alse be non commented

        temp->prev = tail;

        tail = temp;
    }
}

void insertAtPos(Node *&tail, Node *&head, int position, int d)
{

    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    else
    {
        Node *temp = head;
        int cnt = 1;

        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }

        // for last pos
        if (temp->next == NULL)
        {
            insertAtTail(tail, head, d);
            return;
        }

        Node *NodetoInsert = new Node(d);
        NodetoInsert->next = temp->next;
        temp->next->prev = NodetoInsert;
        temp->next = NodetoInsert;
        NodetoInsert->prev = temp;
    }
}
void deleteNode(Node* &head, int position)
{
    // for head
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;

        head = temp->next;

        temp->next = NULL;
        
        delete temp;
    }
    else
    {
        // For other positions
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
        curr->prev = NULL;

        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    print(head);
    cout << endl;
    // cout << "Length: " << getLen(head) << endl;

    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 40);

    insertAtTail(tail, head, 50);
 
    insertAtPos(tail, head, 5, 69);
    print(head);
    
    deleteNode(head,3);
    print(head);


    cout << endl;
    // cout << "Length: " << getLen(head) << endl;
}