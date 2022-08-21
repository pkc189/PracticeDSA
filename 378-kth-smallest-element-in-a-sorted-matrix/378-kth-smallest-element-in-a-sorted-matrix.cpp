class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>p;
        
        for(auto a:matrix)
        {
            for(auto b:a)
            {
              
                
                p.push(b);
                  if(p.size()>k)
                    p.pop();
            }
        }
       return p.top(); 
    }
};