class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0, n = nums.size(), first = nums[0], last = nums[n-1];
        for(int i = 1; i<n; i++){
            if(nums[i] != first and nums[i] != last){
                count++;
            }
        }
        return count;
    }
};