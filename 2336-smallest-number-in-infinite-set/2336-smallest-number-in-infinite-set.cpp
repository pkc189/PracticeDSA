class SmallestInfiniteSet {
public:
    
    set<int>s;
    int curr=0;
    
    SmallestInfiniteSet() {
       curr=1; 
    }
    
    int popSmallest() {
       
        if(s.size())
        {
            int res = *s.begin();
            
            s.erase(res);
            return res;
        }
        else{
            curr++;
            
            return curr-1;
        }
        
    }
    
    void addBack(int num) {
       
        
        if(curr>num)
            s.insert(num);
        
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */