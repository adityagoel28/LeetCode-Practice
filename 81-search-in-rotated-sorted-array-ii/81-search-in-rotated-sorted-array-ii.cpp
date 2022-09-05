class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool index = false;
        int start = 0, end = nums.size()-1;
        while(start <= end){
            int mid = start + (end-start) / 2;
            if(target == nums[mid]) {
                index =  true;
                break;
            }
            if(nums[start] == nums[mid] and nums[mid] == nums[end]){
                start++;
                end--;
            }
            else if(nums[mid] >= nums[start]){
                if(target < nums[mid] and target >= nums[start])
                    end = mid - 1;
                else    start = mid + 1;
            }
            else{
                if(target > nums[mid] and target <= nums[end])
                    start = mid + 1;
                else    end = mid - 1;
            }
        }
        return index;
    }
};