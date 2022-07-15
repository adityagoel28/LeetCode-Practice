class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        if(s == "")   return true;
        for(int i = 0; i<t.length(); i++){
            if(s[j] == t[i]){
                if(j == s.length()-1)    return true;
                j++;
            }
        }
        return false;
    }
};