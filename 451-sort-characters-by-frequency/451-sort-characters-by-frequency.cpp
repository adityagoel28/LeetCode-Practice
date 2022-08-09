class Solution {
public:
    string frequencySort(string s) {
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
        // Priority Queue, pair<int,char
        // priority_queue<pair<int,char>>maxheap;
        // for(auto it:m){
        //     maxheap.push({it.second,it.first});
        // }
        
        // while(maxheap.empty()==0){
        //     pair<int,char>p = maxheap.top();
        //     maxheap.pop();
        //     int b = p.first;
        //     while(b--){
        //         ans+=p.second;
        //     }
        // }
    }
};