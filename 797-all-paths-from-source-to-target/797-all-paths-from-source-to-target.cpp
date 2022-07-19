class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        
        int n = graph.size()-1;
        int edge = n;
        int source=0;
        
        
        vector<int>path;
        
        path.push_back(source);
        
        
        queue<vector<int>>q;
        
        q.push(path);
        
        
        
        while(!q.empty())
        {
            path = q.front();
            q.pop();
            
           int last_val = path.back();
           if(last_val==n)
           {
               ans.push_back(path);
           }
            
            for(int i:graph[last_val])
            {  
                vector<int>v(path);
                v.push_back(i);
                q.push(v);
            }
            
            
            
        }
       
        
        
    
        
        return ans;
        
    }
};