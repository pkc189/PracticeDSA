class Solution {
public:
    int minPartitions(string n) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        int ans = 0;
        for(int i = 9; i >= 0; i--){
            char c = i+'0';
            //size_t found = n.find(c);
            if( n.find(c) != string::npos )
                return i;
        }
        return ans;
    }
};