class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(index.size(), -1);
        // target[1] = 6;
        // target[1] = 9;
        for(int i = 0; i < nums.size(); i++){
            if(target[index[i]] != -1){
                auto itPos = target.begin() + index[i];
                target.insert(itPos, nums[i]);
            }
            target[index[i]] = nums[i];
        }
        // for(int i = nums.size()-1; i<target.size(); i++){
        //     target.erase(i);
        // }
        while(target.size() > nums.size()){
            target.pop_back();
        }
        return target;
    }
};