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
    int deepestLeavesSum(TreeNode* root) {
        
   
        
     int height =    getHeight(root);
        
        int sum = getSum(root,height-1,0);
        
        
        
        return sum;
        
    }
    
    
    
    int getSum(TreeNode*root,int height,int i)
    {
        
           
        if(root==NULL)
            return 0;
        
        if(i==height)
        {
           
            return root->val;
            
        }
    
       
        
        return getSum(root->left,height,i+1) + getSum(root->right,height,i+1);
        
    }
    
    
    int getHeight(TreeNode*root)
    {
        if(root==NULL)
            return 0;
        
        
        
        int l = getHeight(root->left);
        int r = getHeight(root->right);
        
        return max(l,r)+1;
        
    }
    
    
};