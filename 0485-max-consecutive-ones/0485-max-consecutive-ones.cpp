class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size(), count = 0, left = 0, maxx = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0)    count++;
            while(count >= 1){
                if(nums[left] == 0) count--;
                left++;
            }
            maxx = max(maxx, i - left + 1);
        }
        return maxx;
    }
};