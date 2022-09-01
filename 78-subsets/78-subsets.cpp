class Solution {
public:
    vector<vector<int>> ans;
    // int k = 1;
    // void backtrack(int idx, int k, vector<int> nums, vector<int> current){
    //     if(idx > 0){
    //         if(idx == k)
    //             ans.push_back(current);
    //         return;
    //     }
    //     while(k < nums.size()){
    //         for(int i = 0; i<nums.size(); i++){
    //             current.push_back(nums[i]);
    //             backtrack(i+1, k, nums, current);
    //             current.pop_back();
    //         }
    //         k++;
    //     }
    // }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        // backtrack(0, k, nums, current);
        ans.push_back(current);
        for(int i = 0; i<nums.size(); i++){
            int n = ans.size();
            for(int j = 0; j<n; j++){
                current = ans[j];
                current.push_back(nums[i]);
                ans.push_back(current);
            }
        }
        return ans;
    }
};