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
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> result;
        string str="";
        helper(root,result,to_string(root->val));
        
        
//         for(int j=0;j<result.size();j++)
//         {string s="";
//             for(int i=0;i<result[j].size();i++)
//             {
//               s +=  (result[j][i]) ;
//                 s+="->";
//             //    cout<<s;
//             }
//            s.pop_back();
//          s.pop_back();
//             result[j] = s;
//             s="";
            
//         }
        
        
        return result;
  
    }
    
    
    void helper(TreeNode* root,vector<string> &res,string s)
    {
      
        
         // s+=to_string(root->val);
        
        if(root->left == NULL and root->right==NULL)
        {
              res.push_back(s);
            return;
           
               
        }
        
       if(root->left) helper(root->left,res,s + "->" + to_string(root->left->val));
      
       if(root->right) helper(root->right,res,s + "->" + to_string(root->right->val));
        
       //s.pop_back(); 
           // s.pop_back(); 
        
    }
    
    
};