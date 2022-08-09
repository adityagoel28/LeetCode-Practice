class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> m;
        int n = arr.size(), count = 0, x = n;
        for(int i = 0; i < n; i++){
            m[arr[i]]++;
        }
        vector<pair<int, int>> v;
        for(auto it:m){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end());
        for(int i = v.size() - 1; i >= 0; i--){
            if(x <= n/2)    break;
            int b = v[i].first;
            count++;
            x -= b;
        }
        return count;
    }
};