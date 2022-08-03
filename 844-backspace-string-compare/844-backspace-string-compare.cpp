class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string sa = "", ta = "";
        for(int i = 0; i<s.length(); i++){
            if(s[i] == '#'){
                if(sa.length() > 0)
                    sa.pop_back();
            }
            else    sa += s[i];
        }
        for(int i = 0; i<t.length(); i++){
            if(t[i] == '#'){
                if(ta.length() > 0)
                    ta.pop_back();
            }
            else    ta += t[i];
        }
        if(sa == ta)    return true;
        return false;
    }
};