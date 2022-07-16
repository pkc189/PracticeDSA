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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*res = new ListNode(0);
        
        move(head,res);
        
        return res->next->next;
    }
    int sum=0;
    void move(ListNode* head,ListNode* res)
    {
        
        
        
        while(head)
        {
            
         if(head->val==0)
        { 
            res->next = new ListNode(sum);
         
            res=res->next;
            sum=0;
        }
        else
        sum+=head->val;
        head=head->next;
            
        }
        
       
      
   
        
    }
    
};