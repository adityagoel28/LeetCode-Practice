class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size(), windowProd = 1, start = 0, ans = 0;
        for(int i = 0; i<n; i++){
            windowProd *= nums[i];
            while(start <= i and windowProd >= k){
                windowProd /= nums[start];
                start++;
            }
            ans += i - start + 1;
        }
        return ans;
    }
};