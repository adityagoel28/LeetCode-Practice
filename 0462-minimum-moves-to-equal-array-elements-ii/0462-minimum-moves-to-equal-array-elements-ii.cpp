class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size(), minMoves = 0;
        sort(nums.begin(), nums.end());
        int mid = nums[n/2]; // median
        for(int i = 0; i<n; i++)
            minMoves += abs(nums[i] - mid);
        return minMoves;
    }
};