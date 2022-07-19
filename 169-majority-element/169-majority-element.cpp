class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, num = 0, n =  nums.size();
        unordered_map<int, int> m;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto x : m)
            if(x.second > n/2) num = x.first;
        return num;
    }
};