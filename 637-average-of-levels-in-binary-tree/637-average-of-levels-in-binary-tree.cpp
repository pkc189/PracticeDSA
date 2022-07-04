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
    vector<double> averageOfLevels(TreeNode* root) {
       vector<double>result;
        queue<TreeNode*>queueForBFS;
        queueForBFS.push(root);
        
        while(!queueForBFS.empty())
        {
            
            double sum = 0.0;
            double noOfCount=queueForBFS.size();
            
            for(int start=0;start<noOfCount;start++)
            {
                TreeNode * currentNode = queueForBFS.front();
                queueForBFS.pop();
                
                
                if(currentNode->left)
                    queueForBFS.push(currentNode->left);
                
                  if(currentNode->right)
                    queueForBFS.push(currentNode->right);
                sum+=currentNode->val;
                
            }
            
            result.push_back( sum/noOfCount);
            
            
            
        }
        
      return result;  
        
        
    }
};