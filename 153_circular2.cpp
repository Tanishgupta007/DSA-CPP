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

void print(Node *tail)
{
    Node *temp = tail;
    if (temp == NULL)
    {
        cout<<"The List is empty!!!";
    }
    do{
        cout << tail->data << " ";
        tail = tail->next;

    }while (tail != temp);
}

void insertNode(Node* &tail,int element ,int d){
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;

        newNode->next = newNode;
        //because there is only one element and it is circular linked list
    }else
    {
        //for non empty list
        Node* curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node* temp = new Node(d);

        temp->next = curr->next;

        curr->next = temp;
    }
    
}

void deleteNode(Node* &tail,int element){
    if(tail == NULL){
        cout<<"List is empty!!!"<<endl;
        return ;
    }
    else{
        // Non empty

        Node *prev = tail;
        Node*curr = prev->next;

        while(curr->data != element){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        //when there is only one element

        if(curr == prev){
            tail = NULL;
        }
        
        //if we are deleting tail 
        if(curr == tail){
            tail = curr->next;
        }

        curr->next = NULL;
        delete curr;
        
    }
}
int main()
{
    // Node *node1 = new Node(10);
    Node*tail = NULL;
    insertNode(tail,5,10);
    // insertNode(tail,10,20);
    print(tail);
    cout<<endl;
    deleteNode(tail,10);
    print(tail);

}