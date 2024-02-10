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
}
void insertNodeHead(Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);

        temp->next = head;
        head = temp;
    }
}
// detect cycle using floyd's cycle detection

Node *detectCycle(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    {
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

Node *startNode(Node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *intersectionNode = detectCycle(head);
    Node *slow = head;

    while (slow != intersectionNode)
    {
        slow = slow->next;
        intersectionNode = intersectionNode->next;
    }
    return slow;
}

void removeLoop(Node *&head)
{
    if (head == NULL)
    {
        return;
    }

    Node *startN = startNode(head);
    Node *temp = startN;

    while (temp->next != startN)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}
int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertNodeHead(head, 20);
    tail->next = head;
    insertNodeHead(head, 30);
    insertNodeHead(head, 40);

    if (detectCycle(head) != NULL)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    cout << "Cycle starts at " << startNode(head)->data << endl;

    removeLoop(head); // loop removed

    cout << "Loop removed: ";
    print(head);
}