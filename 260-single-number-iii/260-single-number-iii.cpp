class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        int n1xn2 = 0, num1 = 0, num2 = 0, right = 1;
        for(int i = 0; i < nums.size(); i++){
            n1xn2 ^= nums[i];
        }
        while((right & n1xn2) == 0) right = right << 1;
        for(int i = 0; i < nums.size(); i++){
            if((nums[i] & right) != 0)   num1 ^= nums[i];
            else    num2 ^= nums[i];
        }
        ans.push_back(num1);
        ans.push_back(num2);
        return ans;
    }
};