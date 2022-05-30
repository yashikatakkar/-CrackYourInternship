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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n=0, i, carry=0;
        string str1,str2,str;
        ListNode *node;
        node = l1;
        while(node)
        {
            str1.push_back(node->val+'0');  //int to string
            node = node->next;
        }
        node = l2;
        while(node)
        {
            str2.push_back(node->val+'0');
            node = node->next;
        }
  
        if(str1.size()> str2.size())
            str2.insert(0, str1.size()-str2.size(), '0');
        else if(str2.size() > str1.size())
            str1.insert(0, str2.size()-str1.size(), '0');
  
        i=str1.size()-1;
        while(i>=0)
        {
            n = (str1[i]-'0')+(str2[i]-'0')+carry;
            if(n>9)
                carry = n/10;
            else
                carry =0;
            str.push_back(n%10+'0');
            i--;
        }
        if(carry > 0)
            str.push_back(carry+'0');
 
        ListNode *l = new ListNode();
        node = l;
        i=str.size()-1;
        while(i>=0)
        {
            node->next = new ListNode(str[i]-'0');  //string to int
            node = node->next;
            i--;
        }
        return l->next;

        
    }
};
