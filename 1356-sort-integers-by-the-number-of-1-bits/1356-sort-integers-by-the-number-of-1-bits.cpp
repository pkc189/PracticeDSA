class Solution {
public:
   static  bool cmp(pair<int,int>&a,pair<int,int>&b)
        {
       
       
          if(a.second==b.second)
              return a.first<b.first;
            return a.second<b.second;
        }
   int countOnes(int dec)
    {
        int count=0;
        while(dec)
        {
            int rem = dec%2;
            if(rem==1)
                count++;
            
            dec = dec/2;
            
        }
        
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
      
        vector<pair<int,int>>map;
        
        for(auto a:arr)
        {
            map.push_back(make_pair(a,countOnes(a)));
        }
        
    
        
        
       
            sort(map.begin(),map.end(),cmp);
        vector<int>v;
        for(auto a:map)
        {
           v.push_back(a.first);
        }
        
        return v;
        
        
    }
};