class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        
        stack<int>st;
   int i=0,n=h.size(),top,maxa;
        int area=0;
        
        
     while(i<n)
        {
            if(st.empty() || h[st.top()]<=h[i])
                {st.push(i++);}
            
          else
            {
              top = st.top();
              st.pop();
              
              area = h[top]*(st.empty()?i:i-st.top()-1);
              maxa = max(maxa,area);
              
            }
            
        }
        
       while(!st.empty()) {
              top = st.top();
              st.pop();
              
              area = h[top]*(st.empty()?i:i-st.top()-1);
              maxa = max(maxa,area);
              
            }
        
        
        return maxa;
    }
};