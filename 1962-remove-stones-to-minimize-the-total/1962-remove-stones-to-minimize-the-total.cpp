class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        
        int sum=0;
        
        priority_queue<int>pq;
        
        for(auto a:piles)
        {
           pq.push(a);
        }
        
       
        while(k--)
        {
            
            int a = pq.top();
            pq.pop();
            pq.push(a-floor(a/2));
            
        }
        
        
        while(pq.size())
        {
            sum+=pq.top();
            pq.pop();
        }
        
        
        return sum;
    }
};