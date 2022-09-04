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
    
    
    int maxi(int i,int j,vector<int>& nums )
    {
        
        int m = i;
        
        for(int k=i;k<j;k++)
        {
            if(nums[k]>nums[m])
                m=k;
        }
        return m;
    }
    
    TreeNode* solve(int i,int j,vector<int>& nums)
    {   
        if(i==j)
        return NULL;
        
        int maxm = maxi(i,j,nums);
       
        TreeNode * root = new TreeNode(nums[maxm]);
        
        root->left = solve(i,maxm,nums);
        root->right = solve(maxm+1,j,nums);
        return root;
        
    }
    
    
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(0,nums.size(),nums);
    }
};