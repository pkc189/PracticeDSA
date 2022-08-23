// bool cmp(pair<int,string> a,pair<int,string>b)
// {
//     if(a.first==b.first)
//         return a.second<b.second;
//     return a.first>b.first;
// }

class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
       
        
        unordered_map<string,int>map;
        
        for(int i=0;i<senders.size();i++)
        {
            string a = messages[i];
            
            int count=0;
            for(auto b:a)
              {  if(b==' ')
                    count++;}
            
            map[senders[i]]=map[senders[i]]+count+1;
            
        }
        
        string r="";
        int maxm = INT_MIN;
        
        vector<pair<int,string>>v;
        for(auto a:map)
       {    // cout<<a.first<<" "<<a.second<<endl;
       
        
        if(a.second>maxm)
        {
            maxm=a.second;
            r = a.first;
        }
        
         if(a.second==maxm)
        {if(a.first>r)
            r = a.first;
         
        }
        
        
      
       }
        
    
        
        return r;
        
        
        
    }
};