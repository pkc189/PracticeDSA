class Solution {
public:
    int minPartitions(string n) {
        int x=0;
        for(int a:n)
            x = max(x,a);
        
        return x-48;
    }
};