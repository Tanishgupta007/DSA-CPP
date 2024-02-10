#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }cout<<endl;
}

void insertAtHead(Node* &head,int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }else
    {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
    }
    
}

void insertAtPos(Node* &head,int position,int d){
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    else{
        Node*temp = head;
        int cnt = 1;

        while (cnt<position-1)
        {
            temp = temp->next;
            cnt++;
        }

        Node *newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
        
    }
}
// ======================================================================
// ======================================================================
// ======================================================================
// ======================================================================
void reversee(Node* &head ,Node* curr, Node* prev)
{
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
    //we have to solve one case rest all recurrsion will solve

    Node* forward = curr->next;
    curr->next = prev;
    reversee(head,forward,curr);


}

Node* reverseLL1(Node* head){
    Node *prev = NULL;
    Node*curr = head;
    reversee(head,curr,prev);
    return head;
}
// ======================================================================
// ======================================================================
// ======================================================================
// ======================================================================
// ======================================================================
Node* reverseLL(Node* head){
    Node *prev = NULL;
    Node*curr = head;
    Node*forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;

        prev = curr;
        curr = forward;
    }

    // return prev; //at this point the prev is pointing at last element and we have to reverse the list so we make prev at head and traverse it from last;
    head = prev;
    return head;
}
int main()
{
    // Node *node1 = new Node(10);
    Node*head = NULL;
    // insertAtHead(head,5);

    insertAtPos(head,1,5);
    insertAtPos(head,2,15);
    insertAtPos(head,3,25);
    insertAtPos(head,4,35);
    insertAtPos(head,5,45);
    // insertAtPos(head,3,15);
    // insertAtHead(head,15);
    print(head);

    // head = reverseLL(head); // new head
    head = reverseLL1(head); // new head
    print(head);
}