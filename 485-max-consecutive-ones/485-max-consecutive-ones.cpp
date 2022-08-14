class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 1, maxx = 1, j = nums[0];
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1] && nums[i] == 1)  count++;
            else    count = 1;
            if(nums[i+1] == 1)    j = 1;
            maxx = max(maxx, count);
        }
        if(j == 0)  return 0;
        return maxx;
    }
};