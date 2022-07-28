class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxx = 0;
        sort(nums.begin(), nums.end());
        maxx = (nums[nums.size()-1]-1) * (nums[nums.size()-2]-1);
        return maxx;
    }
};