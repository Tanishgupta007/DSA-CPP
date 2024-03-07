#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
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
        temp->prev = NULL;

        head = temp;
    }
}
void insertAtTail(Node *&head, Node *&tail, int d)
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
        temp->prev = tail;

        tail = temp;
    }
}
void insertAtPOS(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, tail, d);
        return;
    }
    else
    {
        Node* temp = head;
        int cnt = 1;
        while (cnt < position - 1)
        {
            temp = temp->next;
            cnt++;
        }

        if(temp->next == NULL){
            insertAtTail(head,tail,d);
            return;
        }
        Node* newNode = new Node(d);
        newNode->next = temp->next;

        temp->next->prev = newNode;
        temp->next = newNode;

        newNode->prev = temp;




    }
}

void deleteNode(Node* &head,int position){
    if(head == NULL){
        cout<<"list is already empty";
        return;
    }

    if(position == 1){

        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;

        temp ->next = NULL;
        temp->prev = NULL;

        delete temp;

    }
    else{
        //for other nodes
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        
        while(cnt < position){
            prev = curr;
            curr = curr->next;

            cnt++;
        }

        prev->next = curr->next;
        curr->next->prev = prev;

        curr->next = NULL;
        curr->prev = NULL;

        delete curr;
    }
}

void print(Node *&head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        cout << "List is empty!" << endl;
    }
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "X";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(head, tail, 100);
    insertAtTail(head, tail, 200);
    insertAtHead(head, tail, 16);

    insertAtPOS(head,tail,3,69);
    print(head);

    deleteNode(head,3);
    cout<<endl;
    print(head);
}