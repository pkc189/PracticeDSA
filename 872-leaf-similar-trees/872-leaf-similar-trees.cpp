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
        string q;
         string q1;
        left(root1,q);
        
         right(root2,q1);
      
  
        
        cout<<q<<endl<<q1;
        
        
         return q==q1;   
    }
    
   void left(TreeNode* root, string &q)
    {
       
            if(root==NULL)
            return ;
       
          if(root->left==NULL and root->right==NULL)
        { 
            q+=to_string(root->val)+',';
             // cout<<q.front();
        }
        
   
        
        
        left(root->left,q);
        left(root->right,q);
        
        
        
    }
    
   void  right(TreeNode* root,string &q)
    {
          // cout<<"root";
        if(root==NULL)
            return ;
       
        
          if(root->left==NULL and root->right==NULL)
        {  q+=to_string(root->val)+',';
        }
     
        
        
        right(root->left,q);
        right(root->right,q);
        
        
        
    }
    
    
    
    
    
};