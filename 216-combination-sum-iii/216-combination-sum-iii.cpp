class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int idx, int k, int n, vector<int> current){
        if(current.size() == k){
            int sum = 0;
            for(int i = 0; i<current.size(); i++){
                sum += current[i];
            }
            if(sum == n)
                ans.push_back(current);
            return;
        }
        for(int i = idx; i<=9; i++){
            current.push_back(i);
            backtrack(i+1, k, n, current);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> current;
        backtrack(1, k, n, current);
        return ans;
    }
};