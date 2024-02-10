// /**
//  * Definition for singly-linked list.
//  * class Node {
//  * public:
//  *     int data;
//  *     Node *next;
//  *     Node() : data(0), next(nullptr) {}
//  *     Node(int x) : data(x), next(nullptr) {}
//  *     Node(int x, Node *next) : data(x), next(next) {}
//  * };
//  */

// Node* kReverse(Node* head, int k) {
//      //base case
//     if(head == NULL){
//         return NULL;
//     }

//     //step 1: reverse first k nodes
//     Node* forward = NULL;
//     Node* curr = head;
//     Node* prev = NULL;
//     int count = 0;
//     while(curr != NULL && count<k){
//         forward = curr->next;
//         curr->next = prev;

//         prev = curr;
//         curr = forward;
        
//         count++;
//     }

//     //step 2: recursion will do

//     //to check if there are sufficient elements left



//     if (forward != NULL) {

//         int remainingELe = 0;
//         Node *temp = forward;

//         while(temp!=NULL){
//             temp = temp->next;
//             remainingELe++;
//         }

//         if(remainingELe >= k){
//             head->next = kReverse(forward, k);
//         }else{
//             head->next = forward;       
//         }

//     }
//     //step 3: return head;

//     return prev;

// }