class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m;
        char a = ' ';
        for(int i = 0; i<s.size(); i++){
            m[s[i]]++;
        }
        for(int i = 0; i<t.size(); i++){
            if(m.find(t[i]) == m.end()) return t[i];
            else if(--m[t[i]] == 0) m.erase(t[i]);
        }
        return a;
    }
};