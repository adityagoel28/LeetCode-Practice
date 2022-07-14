class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int> sum;
        for(int i = 0; i<nums.size(); i++){
            if(i == 0)    sum.push_back(nums[i]);
            else    sum.push_back(nums[i]+sum[i-1]);
        }
        for(int j = 0; j<nums.size(); j++){
            if((j == 0) && (sum[sum.size()-1]-nums[j] == 0))   return j;
            else if(j!=0 && sum[j-1] == (sum[sum.size()-1]-nums[j]-sum[j-1])) 
                return j;
        }
        return -1;
    }
};