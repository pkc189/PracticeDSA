class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
      
     unordered_map<int,vector<pair<int,int>>>adjList;
        
        for(auto f:flights)
        {
            int src = f[0];
            int des = f[1];
            int cost = f[2];
            
           adjList[src].push_back({des,cost});
                  
            
        }
        
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>minHeap;
        
        minHeap.push({0,src,0});
        
        vector<int>dist(n+1,INT_MAX);
        
        while(!minHeap.empty())
        {
            auto t = minHeap.top();
            minHeap.pop();
            int cost = t[0];
            int curr = t[1];
            int stop = t[2];
            
            if(curr==dst)
                return cost;
            
            
            if(dist[curr]<stop)
                continue;
            dist[curr]=stop;
            
            if(stop>k)
                continue;
            
            for(auto next :adjList[curr])
            {
                minHeap.push({cost+next.second,next.first,stop+1});
            }
         
        }
        
           return -1;
        
    }
};