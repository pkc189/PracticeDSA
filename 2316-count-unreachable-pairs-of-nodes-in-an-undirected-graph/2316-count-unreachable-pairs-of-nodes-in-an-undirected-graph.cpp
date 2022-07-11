class Solution {
public:
    typedef  long long ll;
    
    void dfs(int node, vector<int>&vis,ll &count,unordered_map<int,vector<int>>&map)
    {
        vis[node]=1;
        count++;
        for(auto a:map[node])
        {   if(vis[a]==0)
             dfs(a,vis,count,map);
        }
    }
    
    
    
    
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        unordered_map<int,vector<int>>map;
        
        for(auto e:edges)
        {
            map[e[0]].push_back(e[1]);
            map[e[1]].push_back(e[0]);
            
        }
        
        ll ans =(ll) n*(n-1)/2;
        vector<int>vis(n,0);
        
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0){
                   ll count=0;
                   dfs(i,vis,count,map);
                ans = ans-(count*(count-1))/2;
            }
           
                
        }
        
       return ans; 
    }
};


//     0->2,5
//     1->6
//     2->0,4
//     3
//     4->2,5
//     5->0,4
//     6->1
    