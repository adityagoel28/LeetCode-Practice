class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int j = 0, n = nums.size();
        while(j < n){
            int k = nums[j] - 1;
            if (nums[j] != nums[k]) {
                //swap
                int temp = nums[j];
                nums[j] = nums[k];
                nums[k] =  temp;
            } else {
              j++;
            }
        }
        
        vector <int> missing;
        for(int i = 0; i<n; i++){
            if(nums[i] != i+1){
                missing.push_back(i+1);
            }
        }
        return missing;
    }
};