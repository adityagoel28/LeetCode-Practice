class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        // for(int i = 0; i<nums.size(); i++){
        //     if(nums[i] == 0){
        //         nums.erase(nums.begin() + i);
        //         count++;
        //         i -= 1;
        //     }
        // }
        // for(int i = 0; i<count; i++){
        //     nums.push_back(0);
        // }
        
        // Better
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
            }
            else    count++;
        }
        for(int i = 0; i<count; i++){
            ans.push_back(0);
        }
        for(int i = 0; i<nums.size(); i++){
            nums[i] = ans[i];
        }
    }
};