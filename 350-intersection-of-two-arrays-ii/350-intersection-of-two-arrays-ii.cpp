class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> m1, m2;
        for(int i = 0; i<nums1.size(); i++){
            m1[nums1[i]]++;
        }
        for(int i = 0; i<nums2.size(); i++){
            m2[nums2[i]]++;
        }
        for(auto x : m1){
            if(m2[x.first] > 0){
                int m2count = m2.at(x.first);
                int m1count = x.second;
                if(m1count >= m2count){
                    for(int j = 0; j<m2count; j++){
                        ans.push_back(x.first);
                    }
                }
                else{
                    for(int j = 0; j<m1count; j++){
                        ans.push_back(x.first);
                    }
                }
            }
        }
        return ans;
    }
};