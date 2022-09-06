class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int start = 0, end = arr.size()-1, j = 1, k1 = k;
        vector<int> nums;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] != j){
                nums.push_back(j);
                i--;
            }
            j++;
        }
        if(nums.size() < k){
            while(k1--){
                nums.push_back(j);
                j++;
            }
        }
        return nums[k-1];
    }
};