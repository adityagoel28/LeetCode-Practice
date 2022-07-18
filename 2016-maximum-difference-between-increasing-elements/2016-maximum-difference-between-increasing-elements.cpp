class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxDiff = -1, minValue = nums[0];
        for(int i = 1; i<nums.size(); i++){
            minValue = min(minValue, nums[i-1]);
            if(nums[i] != minValue)
            maxDiff = max(maxDiff, nums[i] - minValue);
        }
        return maxDiff;
    }
};