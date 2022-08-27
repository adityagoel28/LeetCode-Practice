class Solution {
public:
    string reorganizeString(string s) {
        string a = "a";
        unordered_map<char, int> m;
        for(int i = 0; i<s.size(); i++){
            m[s[i]]++;
        }
        if(s.size() % 2 == 0){
            for(auto x:m){
                if(x.second >= (s.size()/ 2)+1 )    return "";
            }
        }
        else{
            for(auto x:m){
                if(x.second >= (s.size()/ 2) + 2)    return "";
            }
        }
        vector<pair<int, char>> v;
        for(auto it:m){
            v.push_back({it.second, it.first});
        }
        sort(v.begin(), v.end());
        int j = v.size()-1;
        for(int i = 0; i < s.size(); i+=2){
            s[i] = v[j].second;
            if(--v[j].first == 0)   j--;
        }
        for(int i = 1; i < s.size(); i+=2){
            s[i] = v[j].second;
            if(--v[j].first == 0)   j--;
        }
        return s;
    }
};