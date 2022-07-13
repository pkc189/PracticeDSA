class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto a:operations)
        {
            if(a=="X++")
                x++;
            else if(a=="X--")
                x--;
            else if(a=="++X")
                ++x;
            else
                --x;
        }
        
        return x;
    }
};