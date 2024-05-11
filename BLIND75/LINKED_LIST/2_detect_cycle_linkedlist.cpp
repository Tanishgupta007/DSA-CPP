/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    // two approaches
    // 1 -> using map
    // 2 -> using floyds cycle detection

    // bool hasCycle(ListNode *head) {
    //     if(head == NULL){
    //         return false;
    //     }
    //     map<ListNode*, bool>visited;
    //     ListNode *temp = head;

    //     while(temp != NULL){
    //         if(visited[temp] == true){
    //             return true;
    //         }

    //         visited[temp] = true;
    //         temp = temp->next;
    //     }

    //     return false;
    // }
    bool hasCycle(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
        {
            return false;
        }
        // using floyds detection method
        ListNode *slow = head;
        ListNode *fast = head;

        ListNode *temp = head;

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
                return true;
            }
        }
        return false;
    }
};