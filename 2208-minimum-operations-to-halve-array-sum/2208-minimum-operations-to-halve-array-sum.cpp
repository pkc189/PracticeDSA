class Solution {
public:
    int halveArray(vector<int>& nums) {
    
        
        double sum = accumulate(nums.begin(),nums.end(),0.0);
        priority_queue<double>pq(nums.begin(),nums.end());
   
        
        double tot=0;
        int count=0;
        while((sum-tot)>sum/2)
        {
//                    cout<<sum-tot<<" "<<sum<<endl;
             double a = pq.top()/2;
                pq.pop();
             tot+=a;
              
         
       
                pq.push(a);
             count++;
            
            
       // double x = pq.top();
       // pq.pop();
       //  tot += x / 2;
       //  pq.push(x / 2);     
       //  count++;
            
     
            
        }
        
        
        return count;
    }
};