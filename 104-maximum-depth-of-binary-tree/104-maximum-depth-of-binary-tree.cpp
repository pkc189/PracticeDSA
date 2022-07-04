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
    int maxDepth(TreeNode* root) {
        
        
        return getHeight(root);
        
    
        
    }
    
    int getHeight(TreeNode* root)
    {
       if(root==NULL)
           return 0;
   
       int left =  getHeight(root->left )+1;
       int right =  getHeight(root->right )+1;
        
      return left>right?left:right;
    }
    
};