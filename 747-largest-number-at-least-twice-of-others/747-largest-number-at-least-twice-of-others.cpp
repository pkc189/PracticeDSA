class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        
        int index=0,maxm=INT_MIN,i=0;
        for(auto a:nums)
        { 
            if(a>maxm)
            {
                maxm=a;
                index=i;
            }
            i++;
        }
        cout<<maxm;
        for(auto a:nums)
        {
            if(a!=0&&(maxm/a)<2&&maxm!=a)
                return -1;
        }
        
        
        
        return index;
        
    }
};