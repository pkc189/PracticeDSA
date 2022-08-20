bool cmp(vector<int>&a,vector<int>&b)
 {   return a[1]<b[1];}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& i) {
        
        sort(i.begin(),i.end(),cmp);
        
        
        
        int ans = -1;
        vector<int>t = i[0];
        for(auto a:i)
        {
           if(t[1]>a[0])
               ans++;
            else 
                t = a;
            
        }
        
        
        
        return ans;
        
    }
};