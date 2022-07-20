class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans, i = 0, n = nums.size();
        while(i < n){
            int j = nums[i] - 1;
            if(nums[i] != nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
            else    i++;
        }
        for(int k = 0; k<n; k++){
            if(nums[k] != k+1)  ans = nums[k];
        }
        return ans;
    }
};