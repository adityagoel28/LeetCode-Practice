class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int idx, int k, vector<int> curr, int n){
        if(curr.size() == k){
            ans.push_back(curr);
            return;
        }
        for(int i = idx; i<=n; i++){
            curr.push_back(i);
            backtrack(i+1, k, curr, n);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> current;
        backtrack(1, k, current, n);
        return ans;
    }
};