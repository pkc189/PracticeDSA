
class TrieNode{
    public:
    unordered_map<char,TrieNode*>leaves;
    vector<string>suggestion;
};



void insert(TrieNode*root,string word)
{
    for(auto a:word)
    {
        if(root->leaves.find(a)==root->leaves.end())
        {
            root->leaves[a]= new TrieNode();
        }
            root=root->leaves[a];
        
        
        if(root->suggestion.size()<3)
            root->suggestion.push_back(word);
        
    }
}




class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
     
        
         vector<vector<string>> result(searchWord.size());
        
        
        sort(products.begin(),products.end());
        
        TrieNode* root = new TrieNode();
        
        for(auto a:products)
            insert(root,a);
        
        int i=0;
        for(auto a:searchWord)
        {
            auto it = root->leaves.find(a);
            
            if(it !=root->leaves.end() )
            {
                root=root->leaves[a];
            }
            else
                break;
            result[i]=root->suggestion;
            i++;
        }
        
        
        
        
        
        return result;
        
        
        
    }
};