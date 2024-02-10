#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAtPos(Node *&tail, Node *&head, int position, int d)
{

    //----For 1st position---
    Node *temp = head;
    int cnt = 1;
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    // -----------------
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // ----For last position-------
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // new node to insert
    Node *inNode = new Node(d);
    inNode->next = temp->next;
    temp->next = inNode;
}
void deleteAtPos(Node *&head, int position)
{
    // for 1st node or head
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;

        // memory release
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        // Now we have to remove the node at position
        // curr is at position and previous is at pos-1

        prev->next = curr->next;

        // free space
        curr->next = NULL; // because it is still pointing to some memory that we require
        delete curr;
    }
}

void deleteValue(Node *&head, int d)
{

    if (head->data == d)
    {
        Node *temp = head;
        head = head->next;
        // delete
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;

        while (curr->data != d)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        curr->next = NULL;
        delete curr;
    }
}
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;

    // insertAtHead(head, 20);
    // insertAtHead(head, 30);
    // insertAtTail(tail, 40);

    // insertAtTail(tail, 4);
    // insertAtPos(tail, head, 6, 323);

    print(head);
    cout << endl;
    // deleteAtPos(head, 6);

    deleteValue(head, 30);
    print(head);

    cout << endl;
}

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next; // because it will store the address of next pointer

//     // constructor

//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node *&head, int data)
// {

//     Node *temp = new Node(data);

//     temp->next = head;
//     head = temp;
// }

// void insertAtTail(Node* &tail,int d){

//     Node* temp = new Node(d);
//     tail->next = temp;
//     tail = temp;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// int main()
// {
//     Node *node1 = new Node(10);

//     Node *head = node1; // head Initialisation
//     Node *tail = node1; // tail Initialisation

//     // insertAtHead(head,12);
//     // insertAtHead(head,155);

//     insertAtTail(tail,12);
//     insertAtTail(tail,155);

//     insertAtHead(head,13);
//     print(head);
// }

// #include <iostream>
// using namespace std;
// class Node
// {

// public:
//     int data;
//     Node *next;

//     // constructor

//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void insertAtHead(Node *&head, int d)
// {
//     Node *temp = new Node(d);

//     temp->next = head;
//     head = temp;
// }

// void print(Node* &head)
// {
//     Node* temp = head;

//     while (temp != NULL){
//         cout<<temp->data<<endl;

//         temp = temp->next;
//     }

// }

// int main()
// {
//     Node *node1 = new Node(10);

//     // cout << node1->data << endl;
//     // cout << node1->next << endl;

//     Node* head = node1;

//     print(head);
//     cout<<endl;
//     insertAtHead(head,12);
//     insertAtHead(head,17);

//     print(head);
// }