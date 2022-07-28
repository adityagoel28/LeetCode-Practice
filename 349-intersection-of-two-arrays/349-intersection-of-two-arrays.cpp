class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> m1, m2;
        vector<int> ans;
        for(int i = 0; i<nums1.size(); i++){
            m1[nums1[i]]++;
        }
        for(int i = 0; i<nums2.size(); i++){
            m2[nums2[i]]++;
        }
        for(auto x: m1){
            if(x.second >0 && m2[x.first] > 0)  ans.push_back(x.first);
        }
        return ans;
    }
};