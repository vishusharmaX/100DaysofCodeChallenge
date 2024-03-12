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
    ListNode* removeZeroSumSublists(ListNode* head) {

        int prefix_sum = 0;
        unordered_map<int,ListNode*>mpp;
        ListNode * dummyNode = new ListNode(0);
        dummyNode->next = head;
        mpp[0] = dummyNode;
        while(head != NULL){
            prefix_sum += head->val;

            if(mpp.find(prefix_sum) != mpp.end()){
                //delete wala kaam
                ListNode * start = mpp[prefix_sum];
                ListNode * temp = start;
                int psum= prefix_sum;
                while(temp!=head){
                    temp = temp->next;
                    psum += temp->val;
                    if(temp!=head)
                        mpp.erase(psum);
                }
                start->next=  head->next;
            }
            else{
                mpp[prefix_sum] = head;
            }
            head  = head->next;
        }

        return dummyNode->next;

    }
};