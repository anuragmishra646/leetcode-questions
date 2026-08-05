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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return NULL;
        }
        ListNode* temp1 = head;
        int i = 0;
        while(temp1!=NULL){
            i++;
            temp1 = temp1->next;
        }
        if(i%2==0){
            i = (i/2)+1;
        }else{
            i = (i+1)/2;
        }int k = 1;
        ListNode* temp = head;
        while(k!=i-1){
            temp=temp->next;
            k++;
        }
        temp->next = temp->next->next;
        return head;
    }
};