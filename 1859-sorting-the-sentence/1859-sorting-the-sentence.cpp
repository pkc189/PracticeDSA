class Solution {
public:
    string sortSentence(string s) {
        unordered_map<int,string>map;
        string str="";
        for(auto a:s)
        {
            if(a==' ')
            {
                 auto x= (str.back());
          int num =stoi(to_string(x));
                str.pop_back();
                
                
                
                map[num-48] = str;
                str="";
            }
            else{
                str+=a;
            }
        }
        
        if(str.size()>0)
        {
             auto x= (str.back());
          int num =stoi(to_string(x));
                str.pop_back();
                map[num-48] = str;
                str="";
        }
        
        int c = map.size()-1;
      
        for(int i=1;i<=map.size();i++)
        {
           
            
            str+= c?map[i]+" ":map[i];
            c--;
            
        }
        
      return str;  
        
    }
};