class Solution {
    
    
    bool dfs(vector<int>adj[],vector<int>&colors,vector<vector<int>>& pre,int i,vector<int>&res)
    {
        colors[i]=1;
        
        
        for(auto neigh:adj[i])
        {
            
            if(colors[neigh]==1)return true;
            
            if(colors[neigh]==0)
                 if(dfs(adj,colors,pre,neigh,res))
                    return true;
        }
        
             colors[i]=2;
        res.push_back(i);
        return false;
        
    }
    
    
    
    
public:
    vector<int> findOrder(int n, vector<vector<int>>& pre) {
        vector<int>colors(n,0),res;
        vector<int>adj[n];
        
        for(auto a:pre)
        {
            int u = a[0];
            int v = a[1];
            adj[u].push_back(v);
        }
        
        
        for(int i=0;i<n;i++)
        {
        
            if(colors[i]==0)
            {
                if(dfs(adj,colors,pre,i,res))
                    return {};
            }
        }
        
        
    return res;    
    }
};