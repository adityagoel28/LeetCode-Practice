class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> m;
        int j = 0;
        for(int i = 0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(auto x:m){
            while(x.second--){
                nums[j] = x.first;
                j++;
            }
        }
//         int low = 0, high = nums.size()-1, i = 0;
//         while(i <= high){
            
//         }
    }
};