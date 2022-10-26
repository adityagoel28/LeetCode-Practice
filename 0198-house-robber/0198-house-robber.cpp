class Solution {
public:
    vector<int> dp;
    int solve(vector<int> nums, int n){
        if(n < 0)   return 0;
        if(dp[n] != -1)  return dp[n];
        dp[n] = max(solve(nums,  n - 2) + nums[n], solve(nums,  n - 1));
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            dp.push_back(-1);
        }
        return solve(nums, n-1);
    }
};