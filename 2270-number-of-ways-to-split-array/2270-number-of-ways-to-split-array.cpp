class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size(), splits = 0;
        vector<long> prefix;
        prefix.push_back(nums[0]);
        for(int i = 1; i<n; i++){
            prefix.push_back(prefix.back() + nums[i]);
        }
        for(int i = 0; i<n-1; i++){
            long val = prefix[i];
            if(val >= prefix.back() - val)  splits++;
        }
        return splits;
    }
};