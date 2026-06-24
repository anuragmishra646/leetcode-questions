class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;

        ListNode* tail = head;
        int size = 1;

        while(tail->next != NULL){
            size++;
            tail = tail->next;
        }

        k = k % size;
        if(k == 0) return head;

        int n = size - k;
        ListNode* temp = head;

        for(int i = 1; i < n; i++){
            temp = temp->next;
        }

        tail->next = head;
        head = temp->next;
        temp->next = NULL;

        return head;
    }
};
