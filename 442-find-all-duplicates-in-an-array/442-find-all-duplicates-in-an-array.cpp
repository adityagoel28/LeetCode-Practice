class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n =  nums.size(), i = 0;
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
            if(nums[k] != k+1 ){
                ans.push_back(nums[k]);}
        }
        return ans;
    }
};