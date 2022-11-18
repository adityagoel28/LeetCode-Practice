class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size(), maxx = 0, count = 0, left = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0)    count++;
            while(count > k){
                if(nums[left] == 0) count--;
                left++;
            }
            maxx = max(maxx, i - left + 1);
        }
        return maxx;
    }
};