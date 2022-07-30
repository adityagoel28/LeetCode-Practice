class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        unordered_map<int, int> m;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            if(x.second > 1)    count += (x.second * (x.second-1))/2;
        }
        return count;
    }
};