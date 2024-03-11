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
    ListNode* findNode(ListNode* head, int k) {
        int cnt = 1;
        while (head != NULL) {
            if (cnt == k)
                return head;
            head = head->next;
            cnt++;
        }
        return head;
    }

    ListNode* rotateRight(ListNode* head, int k) {

        if (head == NULL || k == 0)
            return head;

        ListNode* tail = head;
        int len = 1;

        while (tail->next != NULL) {
            len++;
            tail = tail->next;
        }

        if (k % len == 0)
            return head;

        k = k % len;

        tail->next = head;
        ListNode* nthNode = findNode(head, len - k);
        head = nthNode->next;
        nthNode->next = NULL;

        return head;
    }
};