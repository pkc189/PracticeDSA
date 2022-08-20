class Solution {
public:
    int largestInteger(int num) {
        
        priority_queue<int>gt;
        priority_queue<int>lt;
        
        
        string str = to_string(num);
        
      
        for(auto b:str)
        {  
          
           if(int(b-'0')%2==0)
              gt.push(b);
            else 
                lt.push(b);
            
        }
        string temp="";
        
        
        bool flag = int(str[0]-'0')%2==0?true:false;
        
        for(auto b:str)
        {
            if(int(b-'0')%2==0&&gt.size())
           { temp+=gt.top();    gt.pop();}
            
            if(int(b-'0')%2!=0&&lt.size())
            {temp+=lt.top();
        
            lt.pop();}
            
        }
        
        
       cout<<temp;
       
     
        return  stoi(temp);
    }
};