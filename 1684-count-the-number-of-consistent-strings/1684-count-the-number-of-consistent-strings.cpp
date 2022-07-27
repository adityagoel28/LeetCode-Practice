class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count = 0;
        unordered_map<char, int> m;
        for(int i = 0; i<allowed.length(); i++){
            m[allowed[i]] = 1;
        }
        for(int i = 0; i<words.size(); i++){
            int c = 0;
            for(int j = 0; j<words[i].length(); j++){
                if(m.find(words[i][j]) == m.end()) c = 1;
            }
            if(c == 0)  count++;
        }
        return count;
    }
};