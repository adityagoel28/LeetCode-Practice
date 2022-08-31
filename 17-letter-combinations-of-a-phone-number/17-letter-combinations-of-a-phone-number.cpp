class Solution {
public:
    vector<string> a = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    void backtrack(int idx, string digits, string str){
        if(str.size() >= digits.size()){
            ans.push_back(str);
            return;
        }
        for(int i = idx; i<digits.size(); i++){
            int m = digits[i] - '0';
            for(int j = 0; j<a[m].size(); j++){
                str += a[m][j];
                backtrack(i+1, digits, str);
                str.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0)  return ans;
        string str = "";
        backtrack(0, digits, str);
        // for(int i = 0; i<digits.size(); i++){
        //     int m = digits[i] - '0';
        //     s += a[m];
        //     for(int j = i+1; j<digits.size(); j++){
        //         int n = digits[j] - '0';
        //         s += a[n];
        //     }
        //     ans.push_back(s);
        // }
        return ans;
    }
};