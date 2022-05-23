class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int j = 0;
        while(j<nums.size()){
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
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] != i+1){
                missing.push_back(i+1);
            }
        }
        return missing;
    }
};