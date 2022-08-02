class Solution {
public:
    int lengthOfLastWord(string s) {
        string a = "";
        vector<string> words;
        for(int i = 0; i<s.length(); i++){
            if(s[i] == ' ' || i == s.length() - 1){
                if(i == s.length() - 1 && s[i] != ' ') a += s[i];
                if(a.length() > 0)words.push_back(a);
                a = "";
            }
            else    a += s[i];
        }
        return words[words.size()-1].length();
    }
};