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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
      
        
       
        
        unordered_map<int,TreeNode*>storeAllNode;
        unordered_map<int,bool>storeAllChildNode;
        
         for(auto a:descriptions)
        {
            int u = a[0];
            int v = a[1];
            int isLeft = a[2];
            
            storeAllNode[u] = new TreeNode(u);
            storeAllNode[v] = new TreeNode(v);
            
            storeAllChildNode[u]=true;
            storeAllChildNode[v]=true;
           
            
        }
        
        
        for(auto a:descriptions)
        {
            int u = a[0];
            int v = a[1];
            int isLeft = a[2];
            
          
            
            if(isLeft==1)                     
            {
			   
                storeAllNode[u]->left=storeAllNode[v];           
                storeAllChildNode[v]=false;
            }
            else
            {
			  
                storeAllNode[u]->right=storeAllNode[v];
                storeAllChildNode[v]=false;
            }
            
            
        }
        
        
         TreeNode* root=NULL;
 
        for(auto it:storeAllChildNode)
        {
            if(it.second==true)
            {
                root=storeAllNode[it.first];
                break;
            }
        }
        return root;  
    }
};