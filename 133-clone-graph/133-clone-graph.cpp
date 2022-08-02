/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    void dfs(Node* node,Node* node_copy,vector<Node*>&visited)
    {
        visited[node->val] = node_copy;
        
        for(auto y:node->neighbors)
        {
            if(visited[y->val]==NULL)
            {
                Node* newNode = new Node(y->val);
                node_copy->neighbors.push_back(newNode);
                dfs(y,newNode,visited);
            }
            else{
               node_copy->neighbors.push_back(visited[y->val]);  
            }
        }
        
    }
    
    
    
    
    Node* cloneGraph(Node* node) {
        if(node==NULL)
            return NULL;
        
        Node *node_copy = new Node(node->val);
        vector<Node*>visited(101,NULL);
        
        dfs(node,node_copy,visited);
        
        
        return node_copy;
        
        
    }
};