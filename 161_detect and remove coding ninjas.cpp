// /*************************************************
    
//     class Node {
//         public :

//         int data;
//         Node *next;

//         Node(int data) {
//             this -> data = data;
//             this -> next = NULL;
//         }
//     };

// *************************************************/
// Node *detectCycle(Node *&head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }

//     Node *slow = head;
//     Node *fast = head;

//     while (slow != NULL && fast != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {
//             fast = fast->next;
//         }
//         slow = slow->next;

//         if (slow == fast)
//         {
//             return slow;
//         }
//     }
//     return NULL;
// }

// Node *startNode(Node *&head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }

//     Node *intersectionNode = detectCycle(head);
//     if(intersectionNode == NULL){
//         return NULL;
//     }
//     Node *slow = head;

//     while (slow != intersectionNode)
//     {
//         slow = slow->next;
//         intersectionNode = intersectionNode->next;
//     }
//     return slow;
// }
// Node *removeLoop(Node *head)
// {
//     if (head == NULL)
//     {
//         return NULL;
//     }

//     Node *startN = startNode(head);
//     if(startN == NULL){
//         return head;
//     }
//     Node *temp = startN;

//     while (temp->next != startN)
//     {
//         temp = temp->next;
//     }

//     temp->next = NULL;

//     return head;
// }