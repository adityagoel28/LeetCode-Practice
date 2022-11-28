class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size(), subseq = 1;
        sort(nums.begin(), nums.end());
        int x = nums[0];
        for(int i = 1; i<n; i++){
            if(nums[i] - x > k){
                x = nums[i];
                subseq++;
            }
        }
        return subseq;
    }
};