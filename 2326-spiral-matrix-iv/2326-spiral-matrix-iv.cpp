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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
         vector<vector<int>>mat(m,vector<int>(n,-1));
         int toprow = 0 , bottomrow = m-1, leftcol = 0, rightcol = n-1;

         while(head != NULL){
            
                for(int col = leftcol; col <=rightcol ; col++){
                    if(head == NULL)break;
                    mat[toprow][col] = head->val;
                    head = head->next;
                }
                toprow++;

                for(int row = toprow; row <= bottomrow; row++){
                     if(head == NULL)break;
                     mat[row][rightcol] = head->val;
                     head = head->next;
                }
                rightcol--;

                for(int col = rightcol; col >= leftcol ; col--){
                    if(head == NULL)break;
                    mat[bottomrow][col] = head->val;
                    head = head->next;
                }
                bottomrow--;

                for(int row = bottomrow; row >= toprow; row--){
                     if(head == NULL)break;
                     mat[row][leftcol] = head->val;
                     head = head->next;
                }
                leftcol++;
         }

         return mat;
    }
};