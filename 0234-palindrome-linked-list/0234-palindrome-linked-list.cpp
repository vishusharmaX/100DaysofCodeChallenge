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
    bool checkPallindrome(vector<int> & ans){
        int s = 0 ;
        int e = ans.size()-1;
        while(s<e){
            if(ans[s] != ans[e]){
                return false;
            }
            else{
                s++;
                e--;
            }
        }

        return true;

    }

    bool isPalindrome(ListNode* head) {
        vector<int> ans;
        ListNode * temp = head;

        while(temp!=NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        return checkPallindrome(ans);
    }
};

