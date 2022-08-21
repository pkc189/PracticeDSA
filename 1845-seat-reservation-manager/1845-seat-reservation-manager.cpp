class SeatManager {
public:
    
    set<int>p;
    int curr;
        
    SeatManager(int n) {
        curr=1;
    }
    
    int reserve() {
        
        if(p.size())
        {
            int a = *p.begin();
          p.erase(a); 
            return a;
        }
        else{
            curr++;
            return curr-1;
        }
        
    }
    
    void unreserve(int seatNumber) {
        if(curr>=seatNumber)
        
        p.insert(seatNumber);
        
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */