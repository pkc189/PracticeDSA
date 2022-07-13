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
        
        int height =0;
        if(root==NULL)
            return 0;
        
        for(auto a:root->children)
        {
            int c = maxDepth(a);
            
            height=max(height,c);
            
        }
        
        height++;
        return height;
    }
};