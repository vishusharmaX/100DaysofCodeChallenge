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

    bool checkPallindrome(vector<int> &arr){
        int n = arr.size();
        int s = 0 ;
        int e = n-1;

        while(s<=e){
            if(arr[s] != arr[e]){
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
        vector<int>ans;
        ListNode* temp = head;
        while(temp != NULL){
            ans.push_back(temp->val);
            temp = temp->next;
        }

        return checkPallindrome(ans);

    }
};