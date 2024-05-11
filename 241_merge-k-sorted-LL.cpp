//coding ninjas - merge k sorted Linked list

#include<queue>

class compare{
    public: 
    bool operator()(Node* a, Node* b){
        return a->data > b->data;
    }
};
Node* mergeKLists(vector<Node*> &listArray){
    priority_queue<Node*, vector<Node*> , compare> minHeap;

    int k = listArray.size();

    if(k == 0){
        return NULL;
    }
    //step1:
    for(int i=0; i < k;i++){
        if(listArray[i] != NULL){
            minHeap.push(listArray[i]);
        }
    }

    Node* head = NULL;
    Node* tail = NULL;

    while(!minHeap.empty()){
        Node*temp = minHeap.top();
        minHeap.pop();
        if(temp->next != NULL){
            minHeap.push(temp->next);
        }
        if(head == NULL){
            head = tail = temp;
        } else {
            // insert in LL
            tail->next = temp;
            tail = tail->next;
        }
    }
    return head;
}