class TrieNode{
    public:
    
    unordered_map<char,TrieNode*>leaves;
    bool isEnd;

};



void insert(string word,TrieNode* root)
{
    for(int i=0;i<word.size();i++)
    {
        if(!root->leaves[word[i]])
        {
            root->leaves[word[i]] = new TrieNode();
        }
        
        root = root->leaves[word[i]];
        
    }
    
    root->isEnd=true;
}


string check(string word,TrieNode* root)
{
    string s="";
    for(int i=0;i<word.size();i++)
    {
        if(!root->leaves[word[i]])
            break;
        
        root = root->leaves[word[i]];
        s+=word[i];
          if(root->isEnd)
        return s;
    }
  
    return word;
}





class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        
        
        TrieNode * root = new TrieNode();
        
        
        for(auto a:dictionary)
        {
            insert(a,root);
        }
        
        istringstream ss(sentence);
        string word="",ans="";
        
        while(ss>>word)
        {
            ans = ans + check(word,root);
            ans+=" ";
        }
        
        
        ans.pop_back();
        
        
        
        
        
        return ans;
    }
};