class Solution {
public:
    int binarySearch(vector<int> nums, int target, bool maxIndex){
        int start = 0, end = nums.size()-1, keyIndex = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                keyIndex = mid;
                if(maxIndex)    start = mid + 1;
                else    end = mid - 1;
            }
            else if(target > nums[mid]) start = mid + 1;
            else    end = mid - 1;
        }
        return keyIndex;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0] = -1;
        ans[1] = -1;
        ans[0] = binarySearch(nums, target, false);
        if(ans[0] != -1){
            ans[1] = binarySearch(nums, target, true);
        }
        return ans;
    }
};