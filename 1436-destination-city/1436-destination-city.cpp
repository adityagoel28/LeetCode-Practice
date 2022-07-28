class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> m;
        string ans;
        for(int i = 0; i<paths.size(); i++){
            m[paths[i][0]] = 1;
            if(m[paths[i][1]] != 1)
                m[paths[i][1]] = 2;
        }
        for(auto x:m){
            if(x.second == 2)    ans = x.first;
        }
        return ans;
    }
};