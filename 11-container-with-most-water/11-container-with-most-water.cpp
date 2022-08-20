class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, minh, size = height.size();
        // vector<int> left_max(size);
        // for(int i = 0; i<height.size(); i++){
        //     for(int  j = i; j < height.size(); j++){
        //         minh = min(height[i], height[j]);
        //         ans = max(ans, minh * (j - i));
        //     }
        // }
        int left = 0, right = size - 1;
        while(left < right){
            if(height[left] < height[right]){
                ans = max(ans, min(height[left], height[right]) * (right-left));
                left++;
            }
            else{
                ans = max(ans, min(height[left], height[right]) * (right-left));
                right--;
            }
        }
        return ans;
    }
};