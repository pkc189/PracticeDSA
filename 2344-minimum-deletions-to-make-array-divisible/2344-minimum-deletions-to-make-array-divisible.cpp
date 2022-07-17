class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        
        map<int,int>map;
        sort(nums.begin(),nums.end());
        for(auto a:nums)
        {
            map[a]++;
        }
        
        int sum=0;
        for(auto a:map)
        {
            int x = a.first;
            
        bool flag = true;
            for(auto b:numsDivide)
            {
                if(b%x!=0)
                {flag=false;
                      cout<<x<<"->"<<a.second<<endl;
                    sum+=a.second;
                    break;
                }
            }
            if(flag)
            {
                break;
            }
            
        }
        cout<<endl;
        
 
        if(sum==nums.size())
            return -1;
        
        return sum;
        
        
    }
};