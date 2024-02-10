#include<iostream>
#include<map>
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

    if(head == NULL){
        cout<<"List is empty"<<endl;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}

void insertNodeHead(Node* &head,int d){

    if(head == NULL){
        Node *newNode = new Node(d);
        head = newNode;
    }
    else{
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }
}


bool detectCycle(Node *head){
    //if the list is empty
    if(head == NULL){
        return false;
    }

    map<Node*,bool> visited;

    Node*temp = head;

    while(temp!=NULL){//because if the temp is null that means that cycle is not present and when if the cycle is present before that we will return true else false

        if(visited[temp] == true){
            cout<<"Cycle present on element :"<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp->next;
    }

    return false;




}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertNodeHead(head,20);
    insertNodeHead(head,30);
    insertNodeHead(head,40);
    
    cout<<"head = "<<head->data<<endl;
    cout<<"tail = "<<tail->data<<endl;

    tail->next = head->next;// making an artificial loop
    // print(head);
    if(detectCycle(head)){
        cout<<"Cycle is present"<<endl;
    }else{
        cout<<"Cycle is not present"<<endl;

    }
}