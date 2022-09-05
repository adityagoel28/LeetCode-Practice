class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = -1, start = 0, end = nums.size()-1;
        while(start <= end){
            int mid = start + (end-start) / 2;
            if(target == nums[mid]) {
                index =  mid;
                break;
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