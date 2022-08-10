class Solution {
public:
    int minimumSum(int num) {
       
        string n = to_string(num);
        
        sort(n.begin(),n.end());
        
        int a = (n[0]-'0')*10+n[2]-'0';
        int b = (n[1]-'0')*10+n[3]-'0';
        
       
        return a+b;
        
        
    }
};