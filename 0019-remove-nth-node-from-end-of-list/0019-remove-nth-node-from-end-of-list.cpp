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
    int getLen(ListNode* head){
        int cnt = 0 ;
        while(head!=NULL){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int len = getLen(head);
        int k = len - n;
        
        // ListNode * curr = head;

        if(k == 0){
            ListNode * temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        ListNode *prev = NULL;
        ListNode *curr = head;
        
        while(k--) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;
        
        return head;
    }
};