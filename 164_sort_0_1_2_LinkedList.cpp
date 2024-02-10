// /*
// Following is the class structure of the Node class:

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data; 
//         this->next = NULL;
//     }
//     Node(int data, Node* next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };
// */

// Node* sortList(Node *head){
//     int zeroC = 0;
//     int oneC = 0;
//     int twoC = 0;

//     Node*temp = head;
//     while(temp != NULL){
//         if(temp->data == 0){
//             zeroC++;
//         }else if(temp->data == 1){
//             oneC++;
//         }else{
//             twoC++;
//         }
//     temp = temp->next;
//     }


//     temp = head;

//     while(temp!=NULL){
//         if(zeroC != 0){
//             temp->data = 0;
//             zeroC--;
//         }else if(oneC !=0){
//             temp->data = 1;
//             oneC--;
//         }else{
//             temp->data = 2;
//             twoC--;
//         }

//         temp = temp->next;
//     }
//     return head;
// }