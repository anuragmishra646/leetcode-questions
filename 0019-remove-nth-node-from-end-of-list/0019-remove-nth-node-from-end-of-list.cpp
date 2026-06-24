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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return NULL;
        ListNode* temp = head;
        int len = 0;

        while(temp != NULL){
            len++;
            temp = temp->next;
        }

        if(len == n) return head->next;

        int p = len - n;
        ListNode* curr = head;

        for(int i = 1; i < p; i++){
            curr = curr->next;
        }

        curr->next = curr->next->next;
        return head;
    }
};
