class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i<=n; i++){
            int mask = 1, count = 0, num = i;
            while(num){
                // if((i & mask) != 0) count++;
                // mask <<= 1;
                count += num % 2;
                num /= 2;
            }
            ans.push_back(count);
        }
        return ans;
    }
};