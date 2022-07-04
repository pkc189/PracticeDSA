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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int length = nums.size();
        
        if(length==0)
            return NULL;
        
        if(length==1)
            return new TreeNode(nums[0]);
        
        
        int mid = length/2;
        
        TreeNode * res = new TreeNode(nums[mid]);
        
        vector<int> leftV (nums.begin(),nums.begin()+mid);
        vector<int> rightV(nums.begin()+mid+1,nums.end());
        
        
       res->left =  sortedArrayToBST(leftV);
           res->right =  sortedArrayToBST(rightV);
        
        
        return res;
        
        
        
    }
};