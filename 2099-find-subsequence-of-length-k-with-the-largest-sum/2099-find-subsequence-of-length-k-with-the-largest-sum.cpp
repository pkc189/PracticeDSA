typedef pair<int,int> pair1;

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
        
        
        priority_queue<pair1,vector<pair1>,greater<pair1>>p;
        //priority_queue<pair1>p;
        
        for(int i=0;i<nums.size();i++)
        {
              auto a = make_pair(nums[i],i);
            p.push(a);
            
            if(p.size()>k)
            p.pop();
            
          
        }
        
        priority_queue<pair1,vector<pair1>,greater<pair1>>pq;
        
        
        while(!p.empty())
        {
            
            
            auto a = p.top();
            
            pq.push(make_pair(a.second,a.first));
            p.pop();
        }
        
           vector<int>v;
        
        
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            
            
            pq.pop();
        }
        
     
        
        return v;
        
    }
};