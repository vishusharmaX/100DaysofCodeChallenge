class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *curr = list1;

        for (int i = 1 ; i < a ; i++) {
            curr = curr->next;
        }

        ListNode *next = curr->next;

        for(int i = 1; i < b-a+1;i++){
            next = next->next;
        }
        ListNode * endNode = next->next;
        curr->next = list2;

        ListNode *lastNodeInList2 = list2;
        while (lastNodeInList2->next != nullptr) {
            lastNodeInList2 = lastNodeInList2->next;
        }

        lastNodeInList2->next = endNode;

       
        return list1;
    }
};
