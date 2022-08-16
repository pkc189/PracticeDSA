class Solution {
public:
   long long minimalKSum(vector<int>& nums, int k) {
        
        unsigned long long int res=((long long int)k*(long long int)(k+1))/2;
        int cur=k+1;
        map<int,int> mp;
        sort(nums.begin(),nums.end());
        for(int i:nums){
            if(mp[i]!=1 && i<cur){
                res-=i;
                res+=cur;                
                cur++;
            }
            mp[i]=1;
        }
        return res;              
    }
};