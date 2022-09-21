class Solution {
public:
    int arrangeCoins(int n) {
        int i=1;
        if(n==1)
            return n;
        while(n>=i)
        {
            n=n-i;
            i++;
        }
        return i-1;
        
    }
};