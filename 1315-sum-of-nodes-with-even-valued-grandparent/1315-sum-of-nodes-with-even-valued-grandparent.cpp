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
    int sumEvenGrandparent(TreeNode* root) {
       
       return sum1(root,NULL,NULL); 
    }
    
  private:
    int sum1(TreeNode*root,TreeNode*parent,TreeNode*gp)
    {
        int sum=0;
        
        if(root==NULL)
            return 0;
        
        if(gp!=NULL && gp->val%2==0)
            sum+=root->val;
        
        
     sum+=sum1(root->left,root,parent);
     sum+=sum1(root->right,root,parent);
        
        
       return sum; 
    }
};