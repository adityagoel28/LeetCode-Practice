class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0; i<command.length(); i++){
            if(command[i] == 'G')   ans += 'G';
            else if(command[i] == '(' && command[i+1] == ')')   ans += 'o';
            else if(command[i] == '(')  ans += "al";
        }
        return ans;
    }
};