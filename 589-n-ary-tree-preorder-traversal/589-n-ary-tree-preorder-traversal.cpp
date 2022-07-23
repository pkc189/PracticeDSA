/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>res;
        
        if(root==NULL)
            return res;
        
        preOrder(root,res);
        
        return res;
        
    }
    
   void preOrder(Node* root,vector<int>&res) 
   {
       res.push_back(root->val);
       
       for(auto a:root->children)
       preOrder(a,res);
       
   }
    
    
};