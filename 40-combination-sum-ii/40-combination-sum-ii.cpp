class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int idx, vector<int>& candidates, vector<int>& current, int target){
        int sum = 0;
        unordered_map<int, int> m;
        for(int i = 0; i<current.size(); i++){
            sum += current[i];
            m[current[i]]++;
        }
        if(sum > target)    return;
        if(sum == target){
            ans.push_back(current);
            return;
        }
        for(int i = idx; i<candidates.size(); i++){
            if(i && candidates[i] == candidates[i-1] && i > idx) continue; // check duplicate combination
            current.push_back(candidates[i]);
            backtrack(i+1, candidates, current, target);
            current.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> current;
        sort(candidates.begin(), candidates.end());
        backtrack(0, candidates, current, target);
        return ans;
    }
};