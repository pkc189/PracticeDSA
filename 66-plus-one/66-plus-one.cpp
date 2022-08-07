class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        
        reverse(digits.begin(),digits.end());
        vector<int>v;
        int carry=0,s=1;
        for(auto a:digits)
        {
            int x = a+s+carry;
            
            int rem = x%10;
            
            carry = x/10;
            
            s=0;
            v.push_back(rem);
            
            
            
        }
        if(carry)
            v.push_back(carry);
        reverse(v.begin(),v.end());
      return v;  
        
    }
};