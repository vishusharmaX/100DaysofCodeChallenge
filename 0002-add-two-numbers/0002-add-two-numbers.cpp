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
    ListNode * reverse(ListNode* head){
        if(head == NULL ||  head->next == NULL){
            return head;
        }
        ListNode * curr= head;
        ListNode * next = NULL;
        ListNode * prev = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev= curr;
            curr= next;
        }
        return prev;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // l1 = reverse(l1);
        // l2 = reverse(l2);

        int sum = 0 ;
        int carry = 0;
        ListNode * temp = NULL;
        ListNode * head = NULL;
        ListNode * tail = NULL;

        while(l1!= NULL || l2 != NULL){

            int sum = carry + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
            carry = (sum>=10) ? 1 : 0 ;
            sum = sum%10;

            ListNode* temp = new ListNode(sum);

            if(head==NULL){
                head= temp;
            }
            else{
                tail->next = temp;
            }
            tail= temp;

            if(l1) l1= l1->next;
            if(l2) l2= l2->next;

            if(carry>0){
                tail->next = new ListNode(carry);
            }
        }

        return head;
    }
};