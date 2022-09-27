class Solution {
public:
    int countVowelStrings(int n) {
        
        
        vector<int>v(5,1);
        
        for(int i=1;i<n;i++)
        {
            for(int i=3;i>=0;i--)
            {
                v[i]=v[i]+v[i+1];
            }
        }
        
        
        
        
        int sum=0;
        for(auto a:v)
            sum+=a;
        
        return sum;
        
    }
};