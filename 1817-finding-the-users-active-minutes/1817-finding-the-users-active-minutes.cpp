class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int> ans(k);
        unordered_map<int, set<int>> m;
        for(int i = 0; i < logs.size(); i++){
            m[logs[i][0]].insert(logs[i][1]);
        }
        // for(auto x:m){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        for(auto x:m){
            ans[x.second.size()-1]++;
        }
        return ans;
    }
};