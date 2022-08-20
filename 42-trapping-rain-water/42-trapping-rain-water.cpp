class Solution {
public:
    int trap(vector<int>& height) {
        // int ans = 0, size = height.size(), left = 0, right = size - 1;
        // vector<int> left_max(size), right_max(size);
        // for(int i = 0; i < height.size(); i++){
        //     int left_max = 0, right_max = 0;
        //     for(int j = i; j >= 0; j--){
        //         left_max = max(left_max, height[j]);
        //     }
        //     for(int j = i; j < height.size(); j++){
        //         right_max = max(right_max, height[j]);
        //     }
        //     ans += min(left_max, right_max) - height[i];
        // }
        
        int ans = 0, size = height.size();
        vector<int> left_max(size), right_max(size);
        left_max[0] = height[0];
        right_max[size-1] = height[size-1];
        for(int i = 1; i<size; i++){
            left_max[i] = max(height[i], left_max[i-1]);
        }
        for(int i = size-2; i>=0; i--){
            right_max[i] = max(height[i], right_max[i+1]);
        }
        for(int i = 1; i<size-1; i++){
            ans += min(left_max[i], right_max[i]) - height[i];
        }
        return ans;
    }
};