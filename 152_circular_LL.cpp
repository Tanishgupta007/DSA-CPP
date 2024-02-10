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

    // when list is empty

    if (temp == NULL)
    {
        cout << "List is empty";
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next; // here we are using tail because it is pass by value and it will not affect the tail outside function
    } while (tail != temp);
}

void insertNode(Node *&tail, int element, int d)
{ // assuming that element is in the list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;

        newNode->next = newNode; // as there is only one element and it is circular linked list
    }
    else
    {
        // non empty list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element is found after which we have to insert element
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    else
    {
        // Non empty,
        //  Assuming that element is present in the list

        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }

        // now element is found

        prev->next = curr->next;

        // for 1 node linked list

        if (curr == prev)
        {
            tail = NULL;
        }

        // ----->=2 node linked list-----
        else if (tail == curr)
        {
            tail = curr->next; // here we are updating the tail as well because node being deleted was pointing at tail.
        }
        curr->next = NULL;
        delete curr;
    }
}
bool isCircular(Node *head)
{
    if (head == NULL)
    {
        return true;
    }

    Node *temp = head->next;

    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }
    return false;
}
int main()
{
    // Node *node1 = new Node(10);
    Node *tail = NULL;

    insertNode(tail, 5, 3); // here the list is empty so we can write any element as here is 5
    insertNode(tail, 3, 6);
    // insertNode(tail,6,9);
    // insertNode(tail,9,12);
    // insertNode(tail,6,79);

    print(tail);
    cout << endl;

    if(isCircular(tail)){
        cout<<"The list is circular"<<endl;
    }else{

        cout<<"The list is not circular"<<endl;
    }

    // deleteNode(tail,3);
    // print(tail);
}