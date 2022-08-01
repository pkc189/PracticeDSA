class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& pre) {
        
        vector<int>adj[numCourses];
        
        
        for(auto a:pre)
        {
            int u = a[0];
            int v = a[1];
            adj[u].push_back(v);
        }
        
           vector<int>indegree(numCourses,0);
       for(auto a:adj)
       {
           for(auto b:a)
           {
              indegree[b]++;
           }
          
       }
        
               queue<int>q;
        
        for(int i=0;i<numCourses;i++)
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
           if(count==numCourses)
               return true;
            
            
        }
        
        
        
        return false;
    }
};