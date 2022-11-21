class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> stack;
        for(int i = 0; i<n; i++){
            if(s[i] == '(' or s[i] == '{' or s[i] == '[')
                stack.push(s[i]);
            else{
                char topp;
                if(stack.empty())
                    return false;
                else    topp = stack.top();
                if(s[i] == ')'){
                    if(topp == '(')
                        stack.pop();
                    else    return false;
                }
                else if(s[i] == '}'){
                    if(topp == '{')
                        stack.pop();
                    else    return false;
                }
                else if(s[i] == ']'){
                    if(topp == '[')
                        stack.pop();
                    else    return false;
                }
            }
        }
        return stack.empty();
    }
};