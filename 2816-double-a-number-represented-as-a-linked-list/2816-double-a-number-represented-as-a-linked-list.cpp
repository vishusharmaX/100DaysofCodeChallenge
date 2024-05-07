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
    ListNode* doubleIt(ListNode* head) {
        
        if(head == NULL || head->next == NULL){
            if(head->val == 0){
                return head;
            }
            
        }
           
        long long num = 0 ;
        ListNode * temp = head;
        while(temp != NULL){
            num = num * 10 + temp->val;
            temp = temp->next;
        }
        num = num *2;
        ListNode * res = NULL;
        while(num){
            int lastdigit = num%10;
            num = num/10;
            ListNode * newNode = new ListNode(lastdigit);
            newNode->next = res;
            res = newNode;
        }

        return res;
    }
};