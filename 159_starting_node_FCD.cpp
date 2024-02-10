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
        cout << "List is empty" << endl;
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

Node *detectCycle(Node *&head)
{

    if (head == NULL)
    {
        return NULL;
    }
    // By using floyds cycle detection

    Node *slow = head;
    Node *fast = head;

    while(slow!=NULL && fast!= NULL){
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
        {
            return slow;
            
        }
    }
    return NULL;
}

Node *getStart(Node* head){

    if(head == NULL){
        return head;
    }

    Node* intersectionNode = detectCycle(head);
    Node* slow = head;

    while(slow != intersectionNode){
        slow = slow->next;
        intersectionNode = intersectionNode->next;
    }

    return slow;
}
int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    insertNodeHead(head, 20);
    insertNodeHead(head, 30);
    tail->next = head;
    insertNodeHead(head, 40);


    cout<<getStart(head) -> data;

    // print(head);
}