class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m;
        int n = 0;
        for(int i = 0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        for(int i = 0; i<arr.size(); i++){
            if(m[arr[i]] == 1)  n++;
            if(n == k)   return arr[i];
        }
        return "";
    }
};