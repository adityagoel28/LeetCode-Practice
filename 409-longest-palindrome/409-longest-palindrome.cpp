class Solution {
public:
    int longestPalindrome(string s) {
        int len = 0, k = 0, j = 0;
        unordered_map<char, int> M;
        for(int i = 1; i<s.length(); i++){
            if(s[i] != s[i-1]){
                j = 1;
                break;
            }
        }
        if(j == 0)  return s.length();
        for (int i = 0; s[i]; i++){
            // If the current characters is not found then insert
            // current characters with frequency 1
            if(M.find(s[i]) == M.end()){
                M.insert(make_pair(s[i], 1));
            }
            else    M[s[i]]++;
        }
        for(auto& it : M){
            if(it.second / 2 >= 1){
                if(it.second % 2 != 0)
                    k = 1;
                len += (it.second / 2) * 2;
            }
            else    k = 1;
        }
        if(k == 0)    return len;
        return len+1;
    }
};