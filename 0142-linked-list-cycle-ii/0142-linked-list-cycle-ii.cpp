/**
 * Definition for singly-linked list.
 * struct ListListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == NULL || head->next == NULL)
            return NULL;

        ListNode * fast = head;
        ListNode * slow = head;
        ListNode * curr = head;
        while(fast !=NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                    break;
        }
        if (fast == nullptr || fast->next == nullptr)
            return nullptr;
        while(curr != slow){
            slow= slow->next;
            curr = curr->next;
        }

        return curr;

    }
};