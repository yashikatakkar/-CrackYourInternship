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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp,*cur;
    temp=cur=head;
    int count=1,mid;
    while(temp->next!=0){
        count++;
        temp=temp->next;
    }
    
    if(count%2==0){
        mid=ceil((count+1)/2);
    }
    else{
        mid=count/2;
    }
    
    while(mid--){
        cur=cur->next;
    }
    head=cur;
    return head;
        
  }
};
