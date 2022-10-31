class Solution {
public:
    int count(vector<int>& nums1, vector<int>& nums2){
        int triplets = 0, n1 = nums1.size(), n2 = nums2.size();
        unordered_map<int, int> m;
        for(int i = 0; i<n2; i++){
            m[nums2[i]]++;
        }
        for(int i = 0; i<n1; i++){
            for(auto x:m){
                long target = (long)nums1[i] * nums1[i];
                if(target % x.first || m.count(target/x.first) == 0) continue;
                if(target / x.first == x.first) triplets += x.second * (x.second-1);
                else    triplets += x.second * m[target/x.first];
            }
        }
        return triplets/2;
    }
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        return count(nums1, nums2) + count(nums2, nums1);
    }
};