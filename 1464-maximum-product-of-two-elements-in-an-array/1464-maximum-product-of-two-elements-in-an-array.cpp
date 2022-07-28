class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // maxx = (nums[nums.size()-1]-1) * (nums[nums.size()-2]-1);
        // return maxx;
        
        // Optimised Code
        int maxx = 0, j, secondMax = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > maxx){
                maxx = nums[i];
                j = i;
            }
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > secondMax && nums[i] <= maxx && i != j)  secondMax = nums[i];
        }
        return (secondMax-1) * (maxx-1);
    }
};