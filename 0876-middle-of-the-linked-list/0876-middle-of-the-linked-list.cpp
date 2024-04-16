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
    int getLen(ListNode*root){
        if(root== NULL)
            return 0;
        int ans = 0;
        while(root != NULL){
            ans++;
            root = root->next;
        }
        return ans;
    }
    ListNode* middleNode(ListNode* head) {
        int len =getLen(head);
        ListNode * temp  = head;
        if(len%2 != 0){
            
            int cnt = 1;
            while(cnt != len/2 +1){
                cnt++;
                temp = temp->next;
            }
            return temp;
        }
        else{
            int cnt  = 1;
            while(cnt != len/2 + 1){
                cnt++;
                temp= temp->next;
            }

            return temp;
        }
        
        return temp;
    }
};