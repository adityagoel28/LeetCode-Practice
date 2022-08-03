class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size()), pos, neg;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] > 0) pos.push_back(nums[i]);
        //     if(nums[i] < 0) neg.push_back(nums[i]);
        // }
        // for(int i = 0; i<nums.size()/2; i++){
        //     ans.push_back(pos[i]);
        //     ans.push_back(neg[i]);
        // }
        
        // Optimised Code
        int p = 0, n = 1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > 0){
                ans[p] = nums[i];
                p += 2;
            }
            else{
                ans[n] = nums[i];
                n += 2;
            }
        }
        return ans;
    }
};