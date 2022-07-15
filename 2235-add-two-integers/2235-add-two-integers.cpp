class Solution {
public:
    int sum(int num1, int num2) {
        vector<int>v={num1,num2};
        vector<int>prefix(3,0);
        
        for(int i=0;i<v.size();i++)
        {
           prefix[i+1] = prefix[i]+v[i];
        }
        
        
        
       return prefix[v.size()]; 
    }
};