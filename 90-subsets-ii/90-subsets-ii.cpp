class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> current;
        int n = 1, k;
        sort(nums.begin(), nums.end());
        ans.push_back(current);
        current.push_back(nums[0]);
        ans.push_back(current);
        for(int i = 1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]){
                int m = ans.size();
                k = n;
                for(int j = m-1; j>=0 && n>0; j--){
                    current = ans[j];
                    current.push_back(nums[i]);
                    ans.push_back(current);
                    n--;
                }
                n = k;
            }
            else{
                n = ans.size();
                for(int j = 0; j<n; j++){
                    current = ans[j];
                    current.push_back(nums[i]);
                    ans.push_back(current);
                }
            }
        }
        return ans;
    }
};