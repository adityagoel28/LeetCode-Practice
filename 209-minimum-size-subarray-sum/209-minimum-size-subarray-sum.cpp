class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int windowStart = 0, minLen = INT_MAX, sum = 0;
        for(int windowEnd = 0; windowEnd < nums.size(); windowEnd++){
            sum += nums[windowEnd];
            while(sum >= target){
                int windowLength = windowEnd - windowStart+1;
                minLen = min(minLen, windowLength);
                sum -= nums[windowStart];
                windowStart++;
            }
        }
        if(minLen == INT_MAX)   return 0;
        return minLen;
    }
};