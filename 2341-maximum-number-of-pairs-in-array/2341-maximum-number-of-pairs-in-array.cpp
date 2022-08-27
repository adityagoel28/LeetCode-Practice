class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans(2);
        unordered_map<int, int> m;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second > 1){
                ans[0] += x.second/2;
                if(x.second % 2 != 0)   ans[1] += 1;
            }
            else{
                ans[1] += x.second;
            }
        }
        return ans;
    }
};