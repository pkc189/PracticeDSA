const int N=50000;
vector<pair<int,int> >v[N];
bool vis[N];

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
       for(int i=0;i<n;i++)
       {
           v[i].clear();
           vis[i]=false;
       }
        for(int i=0;i<connections.size();i++)
        {
            v[connections[i][0]].push_back({connections[i][1],1});
            v[connections[i][1]].push_back({connections[i][0],0});
        }
        queue<int>q;
        q.push(0);
        int ans=0;
        vis[0]=true;
        while(!q.empty())
        {
            int l=q.front();
            q.pop();
            for(auto it:v[l])
            {
                if(vis[it.first]==true)
                {
                    continue;
                }
                q.push(it.first);
                vis[it.first]=true;
                ans+=it.second;
            }
        }
        return ans;
        
        
        
    }
};