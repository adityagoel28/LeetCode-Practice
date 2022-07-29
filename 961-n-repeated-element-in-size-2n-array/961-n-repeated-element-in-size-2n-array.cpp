class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size()/2, ans;
        unordered_map<int, int> m;
        for(int i = 0; i<2*n; i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second == n)   ans = x.first;
        }
        return ans;
    }
};