class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, t1;
        for(char c:s){
            if(!s1.empty() and c == '#')    s1.pop();
            else if(c != '#')    s1.push(c);
        }
        for(char c:t){
            if(!t1.empty() and c == '#')    t1.pop();
            else if(c != '#')    t1.push(c);
        }
        if(s1 == t1)    return true;
        return false;
    }
};