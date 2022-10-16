class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        int left=0;
        int right=0;
        double maxm=INT_MIN;
        
        if(nums.size()==1)
            return nums[0];
        
        
        while(right<nums.size())
        {
           sum+=nums[right];
             right++;
           
            if((right-left)>=k)
            {
                  
             
                if(sum/k>maxm)
                    maxm=sum/k;
              //  cout<<sum<<endl;
                  sum-=nums[left];
             left++;
            
            }
                 
        
            
        }
        
        return maxm;
    }
};