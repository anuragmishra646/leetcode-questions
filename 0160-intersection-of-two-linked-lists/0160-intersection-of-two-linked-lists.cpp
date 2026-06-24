/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *a = headA;
        ListNode *b = headB;

        int lenA = 0, lenB = 0;

        while (a != NULL) { 
            lenA++;
            a = a->next;
             }
        while (b != NULL) { 
            lenB++; 
            b = b->next; 
            }

        a = headA;
        b = headB;

        int n = 0 ;

        if(lenA > lenB){
            n = (lenA-lenB);
            for(int i = 0 ; i<n ; i++){
                a = a->next ;
            }
        } else {
            n = (lenB-lenA);
            for(int i = 0 ; i<n ; i++){
                b = b->next ;
            }
        }

        while (a != b){
            a = a->next;
            b = b->next;
        }

        return a;
    }
};
