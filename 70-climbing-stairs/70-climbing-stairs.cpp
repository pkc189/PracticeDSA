class Solution {
public:
    int climbStairs(int n) {
        
        if(n<3)
            return n;
        
        int prevOne = 1;
        int prevTwo = 2;
        int curr = 0;
        for(int i=2;i<n;i++)
        { //cout<<"h";
            curr=prevOne+prevTwo;
            prevOne=prevTwo;
            prevTwo=curr;
            
        }
        
        return curr;
    }
};