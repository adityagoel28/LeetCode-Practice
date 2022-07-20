class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Cyclic Sort Method
        int missing = -1, i = 0, n = nums.size();
        while(i < n){
            int j = nums[i];
            if(nums[i] < n && nums[i] != nums[j]){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
            else    i++;
        }
        for(int k = 0; k<n; k++){
            if(nums[k] != k) missing = k;
        }
        if(missing == -1)    return n;
        return missing;
        
        // XOR Method
        
        // int x1 = 0, x2 = 0;
        // for(int i = 0; i<nums.size(); i++){
        //     x1 = x1 ^ nums[i];
        // }
        // for(int i = 0; i<=nums.size(); i++){
        //     x2 = x2 ^ i;
        // }
        // cout<<x1<<x2;
        // return x1^x2;
    }
};