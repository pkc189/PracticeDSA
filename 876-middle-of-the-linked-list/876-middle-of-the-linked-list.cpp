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
       
        ListNode * node = head;
        if(!head)
            return NULL;
        bool flag=true;
        while(node->next)
        {  
            if(flag)
            head = head->next;
            flag=!flag;
            
            node= node->next;
         
        }
        
        return head;
    }
};