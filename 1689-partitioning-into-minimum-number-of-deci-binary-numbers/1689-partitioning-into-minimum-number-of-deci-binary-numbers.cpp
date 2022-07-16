class Solution {
public:
    int minPartitions(string n) {
                
       
        for(int i = 9; i >= 0; i--){
            char c = i+'0';
            
            if( n.find(c) != string::npos )
                return i;
        }
        return 0;
    }
};