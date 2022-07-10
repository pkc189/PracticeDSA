class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int numBattleships=0;
        
        
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]=='X')
                {
                    numBattleships++;
                    solve(board,i,j);
                }
            }
        }
        return numBattleships;
    }
    
    
    
   private:
    void solve(vector<vector<char>>& board,int i,int j)
    {
        if(i<0 || j<0 || i>=board.size()||j>=board[i].size() ||board[i][j]=='.' )
            return;
        
        board[i][j]='.';
        
        solve(board,i+1,j);
        solve(board,i-1,j);
        solve(board,i,j+1);
        solve(board,i,j-1);
        
        
        
        
    }
};