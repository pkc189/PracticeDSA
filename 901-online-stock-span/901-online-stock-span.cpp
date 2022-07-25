class StockSpanner {
public:
    StockSpanner() {
        
    }
    
    
    stack<pair<int,int>>s;
    
    int next(int price) {
       int count=1;
        
        while(!s.empty() && price>=s.top().first)
        {
            count = count + s.top().second;
            s.pop();
        }
        
        
        s.push(make_pair(price,count));
        
        return s.top().second;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */