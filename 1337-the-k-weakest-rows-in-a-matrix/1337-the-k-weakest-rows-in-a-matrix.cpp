

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        int i=0;
        for(auto a:mat)
        { int count=0;
            for(auto b:a)
            {
                if(b==1)
                    count++;
            }
            
            
                pq.push(make_pair(count,i));
         i++;
            
        }
        
       vector<int>adj;
        
        while(!pq.empty()&&k--)
        {
            auto a = pq.top();
            
            adj.push_back(a.second);
            pq.pop();
            
        }
           
        
        
        return adj;
        
    }
};