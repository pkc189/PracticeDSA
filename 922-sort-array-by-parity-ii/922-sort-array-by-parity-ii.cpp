class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,0);
        int posIndex=0;
        int negIndex=1;
        
        for(auto n:nums)
        {
            if(n%2==0)
            {
                v[posIndex]=n;
                posIndex=posIndex+2;
            }
            else
            {
                 v[negIndex]=n;
                negIndex=negIndex+2;
                
            }
        }
        
        return v;
    }
};