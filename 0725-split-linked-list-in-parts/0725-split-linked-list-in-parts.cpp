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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *curr = head;
        int n = 0;
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        int q = n/k;
        int rem = n%k;
        int len;
        vector<ListNode*> ans(k,NULL);
        ListNode* temp = head;
        for(int i=0;i<k;i++){
            if(rem!=0){
                len = q+1;
                rem--;
            }
            else{
                len = q;
            }
            ans[i] = temp;
            while(temp!=NULL && len!=1){
                temp = temp->next;
                len--;
            }
            if(temp==NULL){
                return ans;
            }
            ListNode *temp2 = temp->next;
            temp->next = NULL;
            temp = temp2;
        }
        return ans;
    }
};