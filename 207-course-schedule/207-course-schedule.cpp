class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
       
        int n = numCourses;
        
        vector<int>adj[n];
        
        for(auto a:pre)
        {
            int u = a[0];
            int v = a[1];
            
            adj[u].push_back(v);
        }
        
        vector<int>indegree(n,0);
        
        for(auto a:adj)
        {
            for(auto b:a)
                indegree[b]++;
        }
        
        
        queue<int>q;
        
        
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        
        int count=0;
        while(!q.empty())
        {
            int front = q.front();
            count++;
            q.pop();
            
            for(auto a:adj[front])
            {
                indegree[a]--;
                if(indegree[a]==0)
                    q.push(a);
            }
           if(count==n)
               return true;
            
            
        }
        
        
        
        return false;
    }
};

 