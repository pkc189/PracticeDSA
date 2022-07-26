class Solution {
public:
    string interpret(string command) {
       string s;
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='(' && command[i+1]==')')
                s+="o";
             if(command[i]=='a' && command[i+1]=='l')
                s+="al";
            if(command[i]=='G')
                s+='G';
        }
        return s;  
    }
};