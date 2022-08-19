class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> even, odd;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] % 2 == 0)    even[nums[i]]++;
            else    odd[nums[i]]++;
        }
        for(auto x: even){
            while(x.second--)
                ans.push_back(x.first);
        }
        for(auto x: odd){
            while(x.second--)
                ans.push_back(x.first);
        }
        return ans;
    }
};