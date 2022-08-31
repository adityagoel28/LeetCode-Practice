class Solution {
public:
    vector<string> ans;
    void backtrack(int idx, string s){
        if(idx == s.size()){
            ans.push_back(s);
            return;
        }
        backtrack(idx + 1, s);
        if(isalpha(s[idx])){
            s[idx] ^= (1 << 5);
            backtrack(idx + 1, s);
        }
    }
    vector<string> letterCasePermutation(string s) {
        backtrack(0, s);
        return ans;
    }
};