class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int idx, vector<int> candidates, vector<int> current, int target){
        int sum = 0;
        for(int i = 0; i<current.size(); i++){
            sum += current[i];
        }
        if(sum > target)    return;
        if(sum == target){
            ans.push_back(current);
            return;
        }
        for(int i = idx; i<candidates.size(); i++){
            current.push_back(candidates[i]);
            backtrack(i, candidates, current, target);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        backtrack(0, candidates, current, target);
        return ans;
    }
};