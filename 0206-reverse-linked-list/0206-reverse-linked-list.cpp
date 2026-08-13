// size nikaalke bhi hojaata lekin complexity pohoch jaati o(n^2) boht ganda approach 
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* neXt = NULL;
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr!=NULL){
            neXt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = neXt;
        }
        return prev;
    }
};