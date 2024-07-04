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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * dummyNode = new ListNode(-1);
        ListNode * result = dummyNode;
        head = head->next;
        while(head != NULL){
           int sum = 0;
           while(head != NULL && head->val != 0){
                sum+=head->val;
                head= head->next;
           }
           ListNode * nnode = new ListNode(sum);
           result->next = nnode;
           result = nnode;

           if(head != NULL){
                head = head->next;
           }
        }

        return dummyNode->next;

        return dummyNode->next;
    }
};