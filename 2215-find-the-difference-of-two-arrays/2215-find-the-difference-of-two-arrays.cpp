class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        vector<int> n1, n2;
        unordered_map<int, int> m1, m2;
        for(int i = 0; i<nums1.size(); i++){
            m1[nums1[i]]++;
        }
        for(int i = 0; i<nums2.size(); i++){
            m2[nums2[i]]++;
        }
        for(auto x: m1){
            if(m2.find(x.first) == m2.end())   n1.push_back(x.first);
        }
        for(auto x: m2){
            if(m1.find(x.first) == m1.end())   n2.push_back(x.first);
        }
        ans.push_back(n1);
        ans.push_back(n2);
        return ans;
    }
};