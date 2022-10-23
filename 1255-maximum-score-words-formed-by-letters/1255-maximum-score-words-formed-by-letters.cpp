class Solution {
public:
    
    
    int helper(vector<string>& words,int curr, vector<char>& letters, vector<int>& score)
{
    if(curr<0)
        return 0;
    
    
    unordered_map<char,int>curr_dict,curr_word,remaining;
    
    
    for(auto a:letters)
        curr_dict[a]++;
    
    for(auto a:words[curr])
        curr_word[a]++;
    
    vector<char>lettersr;
    
    remaining=curr_dict;
    int flag=1;
    
    
    for(auto temp:curr_word)
    {
        if(temp.second>curr_dict[temp.first])
        {
            flag=0;
            break;
        }
        remaining[temp.first]-=temp.second;
        
    }
    
    if(flag==0)
        return helper(words,curr-1,letters,score);
    
    int curr_score=0;
    
    
    for(auto a:words[curr])
        curr_score+=score[a-'a'];
    
        for(auto temp:remaining){
            for(int i=0;i<temp.second;i++)
                lettersr.emplace_back(temp.first);
        }
		//calling on the next wor with reduced letters vector and adding the score 
        int ans2=helper(words, curr-1, lettersr, score)+curr_score;        
		//returning the maximum value for the two options we had if current wor can be constructed
        return max(helper(words, curr-1, letters, score), ans2);
    
    
    
}
    
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        return helper(words,words.size()-1,letters,score);
    }
};

