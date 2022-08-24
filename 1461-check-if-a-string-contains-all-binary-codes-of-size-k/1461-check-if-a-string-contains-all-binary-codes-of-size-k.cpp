class Solution {
public:
    bool hasAllCodes(string s, int k) {
       unordered_set<string>st;
        
        int n = pow(2,k);
        
        for(int i=0;i<s.size();i++)
        {
            string str = s.substr(i,k);
            if(str.size()==k)
            st.insert(str);
            //cout<<str<<endl;
        }
        
        //cout<<st.size();
        
        return n==st.size();
        
        
    }
};