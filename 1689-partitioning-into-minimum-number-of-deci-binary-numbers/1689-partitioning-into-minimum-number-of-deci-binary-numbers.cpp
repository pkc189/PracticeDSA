class Solution {
public:
    int minPartitions(string n) {
                
        int answer = 0;
        for(int i = 9; i >= 0; i--){
            char c = i+'0';
            
            if( n.find(c) != string::npos )
                return i;
        }
        return answer;
    }
};