class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int>map;
        int maxm=INT_MIN;
        for(auto a:arr)
        {
            map[a]=a;
            maxm = max(maxm,a);
        }
        
     int i=0;
       while(true)
       {
           if(map[i])
            {i++;   continue;}
           
           if(!k)
               return i;
           k--;
           
           i++;
       }
        return 0;
    }
};