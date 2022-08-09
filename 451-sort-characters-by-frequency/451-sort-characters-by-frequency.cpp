class Solution {
public:
    string frequencySort(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        unordered_map<char, int> m;
        string ans = "";
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
        }
        vector<pair<int, char>> v;
        for(auto it:m){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end());
        for(int i = v.size()-1; i >= 0; i--){
            int b = v[i].first;
            while(b--){
                ans += v[i].second;
            }
        }
        return ans;
    }
};