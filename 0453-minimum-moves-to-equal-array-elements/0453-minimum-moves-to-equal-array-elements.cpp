class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size(), minMoves = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n; i++)
            minMoves += abs(nums[i] - nums[0]);
        return minMoves;
    }
};