class Solution {
public:
    int minPartitions(string n) {
           ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int x=0;
        for(int a:n)
            x = max(x,a);
        
        return x-'0';
    }
};