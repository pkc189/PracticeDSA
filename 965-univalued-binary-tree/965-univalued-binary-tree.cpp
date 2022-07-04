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
    bool isUnivalTree(TreeNode* root) {
        int val = root->val;
        
        return check(root,val);
    }
    
    bool check(TreeNode*root,int val)
    {
        if(root==NULL)
            return true;
        
        if(root->val!=val)
        {
            return false;
        }
        
        
      bool x =   check(root->left,val);
      bool y =   check(root->right,val);
        
        return x&&y;
        
        
    }
    
};