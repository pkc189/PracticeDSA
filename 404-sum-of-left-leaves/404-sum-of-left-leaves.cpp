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

    
    bool isLeaf(TreeNode *node)
{
   if (node == NULL)
       return false;
   if (node->left == NULL && node->right == NULL)
       return true;
   return false;
}
    
         int count=0;
    int sumOfLeftLeaves(TreeNode* root) {
        
       
        
        if(!root)
            return 0;
          
        
  { 
        
    if(isLeaf(root->left))
        count+= root->left->val;
      
     
       sumOfLeftLeaves(root->left) ;
        
      sumOfLeftLeaves(root->right);
     
          
   }
  
        
        return count ;
    }
};