class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prod = 1, count = 0, j;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                count++;
                j = i;
            }
            else    prod *= nums[i];
        }
        for(int i = 0; i<nums.size(); i++){
            if(count == 0){
                int finall = prod/nums[i];
                ans.push_back(finall);
            }
            else if(count > 1) ans.push_back(0);
            else if(count == 1 && i != j){
                ans.push_back(0);
            }
            else if(count == 1 && i == j)
                ans.push_back(prod);
        }
        return ans;
    }
};