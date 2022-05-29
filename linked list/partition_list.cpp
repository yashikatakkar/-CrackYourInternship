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
    ListNode* partition(ListNode* head, int x) {
          ListNode* dummyOne=new ListNode(-1);
        ListNode* dummyTwo=new ListNode(-1);
        ListNode* tailOne=dummyOne;
        ListNode* tailTwo=dummyTwo;
        ListNode* curr=head;
        while(curr!=NULL){
           ListNode* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            if(temp->val<x){
               tailOne= addNodeAtLast(temp,tailOne);
               
            }
            else{
              tailTwo=  addNodeAtLast(temp,tailTwo);
            }
        }
        tailOne->next=dummyTwo->next;
        return dummyOne->next;
    }
//------ Add Node At Last -------------   
     ListNode* addNodeAtLast(ListNode* node, ListNode* tail){
        tail->next=node;
        tail=tail->next;
        return tail;
    }
};
