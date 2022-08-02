class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        vector<int>::iterator it;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                it = nums.begin() + i;
                nums.erase(it);
                count++;
                i -= 1;
            }
        }
        for(int i = 0; i<count; i++){
            nums.push_back(0);
        }
    }
};