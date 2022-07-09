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
    int maxDepth(Node* root) {
        if(root==NULL)
            return 0;
        
        int count=0;
        
        for(auto child:root->children)
        {
            int x = maxDepth(child);
            count = max(count,x);
        }
       
        
      return count+1;  
        
    }
};