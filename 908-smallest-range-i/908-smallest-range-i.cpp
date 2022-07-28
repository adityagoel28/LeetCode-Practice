class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int maxelem = nums[nums.size()-1], min = nums[0];
        return max(0, (maxelem - k - (min +k)));
    }
};