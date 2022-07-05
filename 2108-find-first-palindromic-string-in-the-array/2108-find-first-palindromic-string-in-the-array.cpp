class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        
        for(auto a:words)
        {
            string temp =a;
            int n = a.size();
            for(int i=0;i<n/2;i++)
            {
                swap(a[i],a[n-1-i]);
            }
            
            if(temp==a)
                return temp;
            
        }
        
        return "";
    }
};