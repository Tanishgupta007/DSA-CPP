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
        cout << "Linked List is Empty!" << endl;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertNodeHead(Node *&head, int d)
{
    if (head == NULL)
    {
        Node *newNode = new Node(d);

        head = newNode;
    }
    else
    {

        Node *temp = new Node(d);

        temp->next = head;

        head = temp;
    }
}

// detect using Floyd's cycle detection

Node* detectCycle(Node* &head)
{

    if(head == NULL){
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (slow!=NULL &&fast != NULL)
    {
        fast = fast->next;
        if(fast!= NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            cout<<"At node "<<slow->data<< " ,";
            return slow;
        }
    }
    return NULL;
}
int main()
{

    Node* node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertNodeHead(head, 20);
    insertNodeHead(head, 30);
    insertNodeHead(head, 40);

    tail->next = head;

    cout<<head->data<<" "<<tail->data<<endl;

    if(detectCycle(head) != NULL){
        cout << "Cycle is present\n";
    }else{

        cout << "Cycle is not present\n";
    }
    // print(head);
}