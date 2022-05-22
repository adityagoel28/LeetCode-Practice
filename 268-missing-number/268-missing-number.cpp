class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x1 = 0, x2 = 0;
        for(int i = 0; i<nums.size(); i++){
            x1 = x1 ^ nums[i];
        }
        for(int i = 0; i<=nums.size(); i++){
            x2 = x2 ^ i;
        }
        cout<<x1<<x2;
        return x1^x2;
    }
};