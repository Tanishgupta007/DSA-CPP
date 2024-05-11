/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 //merge k sorted linked list can be achieved with the help of minHeap
class compare{
    public:
    bool operator()(ListNode* a, ListNode* b){
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*> , compare> minHeap;

        //step1: insert first element of k list to minHeap
        int k = lists.size();

        if(k == 0){
            return NULL;
        }
        for(int i = 0;i < k;i++){
            if(lists[i] != NULL){
                minHeap.push(lists[i]);
            }
        }
        //NOW the min element is on the top
        ListNode* head = NULL;
        ListNode* tail = NULL;
        while(!minHeap.empty()){
            
            //minHeap Part
            ListNode* temp = minHeap.top();
            minHeap.pop();

            if(temp->next != NULL){
                minHeap.push(temp->next);
            }
            //LL part
            if(head == NULL){
                head = tail = temp;
            }else{
                tail->next = temp;
                tail = tail->next;
            }

        }
            return head;
    }
};