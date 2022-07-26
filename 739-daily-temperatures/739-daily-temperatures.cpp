class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>v(t.size(),0);
        stack<int>s;
        
        
        
        for(int i=0;i<t.size();i++)
        {  
            
           while(!s.empty()&&t[i]>t[s.top()])
           {
               v[s.top()]=i-s.top();
               s.pop();
           }
            
            s.push(i);
        }
        return v;
    }
};