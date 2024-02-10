// Approach 1
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

int getLength(Node* head){
    
    int len = 0;
    while(head != NULL){
        len++;
        head = head->next;
    }

    return len;
}

Node *findMiddle(Node *head) {
    int len = getLength(head);

    int ans = (len/2)+1;

    Node *temp = head;
    int cnt = 1;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }

    return temp;
}
*/

// xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
// Approach 2


/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *findMiddle(Node *head) {
    
    if(head == NULL || head->next == NULL){
        return head; //for 0 or 1 node
    }

    if(head->next->next == NULL){
        return head->next; //for 2 nodes
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast!=NULL){
        fast = fast->next;
        if(fast != NULL){
            fast= fast->next;
        }
        slow = slow->next;
    }

    return slow;
}

*/