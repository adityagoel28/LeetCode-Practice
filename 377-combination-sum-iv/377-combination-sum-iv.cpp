class Solution {
public:
    int combinationSum4(vector<int>& nums, int t) {
        vector<unsigned int> dp(t + 1, 0);
        sort(nums.begin(), nums.end());
        dp[0] = 1;
        for(int i = 0; i < t; i++) {
            for(int e: nums) {
                if(i + e <= t) dp[i + e] += dp[i];
                else break;
            }
        }
        return dp[t];
    }
};