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
        
        stack<Node*>s;
  
        if(root==NULL)
            return res;
        
        
        
        s.push(root);
        
        
        while(!s.empty())
        {
            auto a = s.top();
            s.pop();
           
                res.push_back(a->val);
            vector<Node*>v;
            for(auto children:a->children)
                v.push_back(children);
         
            reverse(v.begin(),v.end());
            
           for(auto a:v)
               s.push(a);
            
            
        }
        
        
        
       // preOrder(root,res);
        
        return res;
        
    }
    
//    void preOrder(Node* root,vector<int>&res) 
//    {
//        res.push_back(root->val);
       
//        for(auto a:root->children)
//        preOrder(a,res);
       
//    }
    
    
};