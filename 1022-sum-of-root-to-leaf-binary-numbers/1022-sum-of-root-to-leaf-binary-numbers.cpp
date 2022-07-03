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
    int sumRootToLeaf(TreeNode* root) {
       
        int sum=0;
        string binary="";
     
        traverse(root,binary,sum);
        
        return sum;
        
    }
    
    void traverse(TreeNode * root,string &binary,int &sum)
    {
        if(root==NULL)
          {
             
        return;
        }
        
          binary+=to_string(root->val);
        
        if(root->left ==NULL && root->right==NULL)
        {
             // cout<<binary<<endl;
               sum+=stoi(binary,0,2);
           //  binary.pop_back();
            
        }
        
      
        traverse(root->left,binary,sum);
  
       traverse(root->right,binary,sum);
        // if(binary.size()>2)

       binary.pop_back();
        
     
        
    }
    
    
    
    
    
};