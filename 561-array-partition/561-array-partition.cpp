class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int maxm=INT_MAX;
       
        priority_queue<int>pq;
        
        
        for(auto a:nums)
            pq.push(a);
        
        
        int n = pq.size();
        int sum=0;
      for(int i=0;i<n/2;i++)
        {
            int a = pq.top();
                pq.pop();
           int b = pq.top();
                pq.pop();
         
            maxm = min(a,b);
          sum+=maxm;
        
        }
        
       
        
        
       return sum; 
    }
};
