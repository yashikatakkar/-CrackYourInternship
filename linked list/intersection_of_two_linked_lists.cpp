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
        int a=0, b=0;
        // to count the size of the linked list iterate through each node & increment size
        ListNode *currA = headA, *currB = headB;
        while(currA != NULL){
            currA = currA -> next;
            a++;
        }
        while(currB != NULL) {
            currB = currB->next;
            b++;
        }
        
        int k = abs(b-a);
        if ( b > a ) {
        //if the size of B > A, then b becomes b->next till the difference a-b becomes zero
            while(k--) {
                headB = headB -> next;
            }
        }
        else {
        //if the size of B < A, then a becomes a->next till the difference a-b becomes zero
            while(k--) {
                headA = headA -> next;
            }
        }
        
        // check if headA & headB are equal,if not then move to next pointers of headA & headB
        while(headA != headB && headA->next != NULL && headB->next != NULL) {
            headA = headA -> next;
            headB = headB -> next;
        }
        
        // if one of the list becomes NULL and still no node is found common then return NULL
        if(headA != headB) return NULL;
        
        // if above statement is not true, then return the common node either headA or headB
        return headA;
        
    }
};
