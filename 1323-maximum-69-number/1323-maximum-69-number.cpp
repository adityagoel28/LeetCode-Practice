class Solution {
public:
    int maximum69Number (int num) {
        vector<int> nums;
        while(num){
            int digit = num % 10;
            nums.push_back(digit);
            num /= 10;
        }
        int n = nums.size();
        reverse(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(nums[i] == 6){
                nums[i] = 9;
                break;
            }
        }
        int ans = 0, poww = 0;
        for(int i = n-1; i >= 0; i--){
            ans += nums[i] * pow(10, poww);
            poww++;
        }
        return ans;
    }
};