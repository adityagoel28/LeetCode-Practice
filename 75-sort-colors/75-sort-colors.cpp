class Solution {
public:
    void sortColors(vector<int>& nums) {
        // map<int, int> m;
        // int j = 0;
        // for(int i = 0; i<nums.size(); i++){
        //     m[nums[i]]++;
        // }
        // for(auto x:m){
        //     while(x.second--){
        //         nums[j] = x.first;
        //         j++;
        //     }
        // }
        
        // Another approach
        int low = 0, high = nums.size()-1, i = 0;
        while(i <= high){
            if(nums[i] == 0){
                int temp = nums[i];
                nums[i] = nums[low];
                nums[low] = temp;
                i++;
                low++;
            }
            else if(nums[i] == 1)   i++;
            else{
                int temp = nums[i];
                nums[i] = nums[high];
                nums[high] = temp;
                high--;
            }
        }
    }
};