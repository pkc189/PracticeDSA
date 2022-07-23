class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    
        // struct str{
        //     int val=-1;
        // };
        
    unordered_map<int,int>map;
        
        for(int i=0;i<nums2.size();i++)
            map[nums2[i]]=i;
        
        
    vector<int>res;
        
        for(auto a:nums1)
        { 
            int x=-1;
            for(int i=map[a];i<nums2.size();i++)
            {
                if(nums2[i]>a)
                  { x=nums2[i];break;}
                
            }
            res.push_back(x);
        }
        
      
       return res; 
    }
};