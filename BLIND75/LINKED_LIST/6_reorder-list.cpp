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
class Solution {
public:
    ListNode* findMid(ListNode* head){
        ListNode* slow = head; 
        ListNode* fast = head->next;

        while(fast){
            fast = fast->next;
            if(fast!=NULL){
                fast = fast->next;
            }
            slow = slow->next;
        }


        return slow;
    }
    ListNode* reverse(ListNode* second){
        ListNode* prev = NULL;
        ListNode* curr = second;
        ListNode* forward = NULL;

        while(curr){
            forward= curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }

        return prev;
    }

    void reorderList(ListNode* head) {

        //step1 : find mid and break the list into two
        ListNode* mid = findMid(head); //mid found

        ListNode* first = head;
        ListNode* second = mid->next;
        mid->next = NULL;
        second = reverse(second);

        while( second){
            ListNode* temp1 = first->next;
            first->next = second;

            ListNode* temp2 = second->next;
            second->next = temp1;

            first = temp1;
            second = temp2;
        }

    }
};