class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long int max1 = nums[0], max2 = INT_MIN, max3 = INT_MIN;
        unordered_map<int, int> m;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
            if(nums[i] > max1)  max1 = nums[i];
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > max2 && nums[i] < max1)  max2 = nums[i];
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > max3 && nums[i] < max2)  max3 = nums[i];
        }
        cout<<m.size();
        if(m.size() > 2)    return max3;
        return max1;
    }
};