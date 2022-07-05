/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        queue<int> q;
         queue<int> q1;
        left(root1,q);
        
         right(root2,q1);
      
   while(!q.empty())
   { //cout<<q.front()<<q1.front()<<endl;
       if(q.front()!=q1.front())
       { 
           return false;
       }
       
       q.pop();
       q1.pop();
   }
        
        
        
        
         return q.empty() && q1.empty();   
    }
    
   void left(TreeNode* root,queue<int>&q)
    {
       
            if(root==NULL)
            return ;
       
          if(root->left==NULL and root->right==NULL)
        { 
            q.push(root->val);
             // cout<<q.front();
        }
        
   
        
        
        left(root->left,q);
        left(root->right,q);
        
        
        
    }
    
   void  right(TreeNode* root,queue<int>&q)
    {
          // cout<<"root";
        if(root==NULL)
            return ;
       
        
          if(root->left==NULL and root->right==NULL)
        {   q.push(root->val);
        }
     
        
        
        right(root->left,q);
        right(root->right,q);
        
        
        
    }
    
    
    
    
    
};