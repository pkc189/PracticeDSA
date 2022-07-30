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
    
    string str="";
    int getDecimalValue(ListNode* head) {
        
        if(head==NULL)
            return 0;
        
        while(head)
        {
            str +=to_string(head->val);
            head=head->next;
        }
        
        reverse(str.begin(),str.end());
        int decimal=0;
        
        for(int i=0;i<str.size();i++)
        {
            decimal+=pow(2,i)*(int)(str[i]-'0');
        }
        
        
       // cout<<str;
       return decimal; 
    }
};