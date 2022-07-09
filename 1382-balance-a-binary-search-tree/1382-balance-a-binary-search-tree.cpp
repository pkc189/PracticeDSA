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
      vector<TreeNode*>v;
    TreeNode* balanceBST(TreeNode* root) {
        
      
        
        inOrder(root);
        
        int n=v.size();
        
       return sort(0,n-1);
        
    }
    
  private:
    
    void inOrder(TreeNode* root)
    {
        if(root==NULL)
            return;
        
        inOrder(root->left);
        v.push_back(root);
        inOrder(root->right);
   
    }
    
    TreeNode* sort(int start,int end)
    {
        
        if(start>end)
            return NULL;
        
        int mid = (start+end)/2;
        
        TreeNode* root = v[mid];
        
        root->left = sort(start,mid-1);
        root->right = sort(mid+1,end);
        
        return root;
        
        
        
    }
    
    
    
    
    
    
    
    
    
};