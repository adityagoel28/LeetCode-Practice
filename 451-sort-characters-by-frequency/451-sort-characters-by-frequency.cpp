class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(int i = 0; i < s.length(); i++){
            m[s[i]]++;
        }
        
        // Priority Queue,pair<int,char
        priority_queue<pair<int,char>>maxheap;
        for(auto it:m){
            maxheap.push({
                it.second,it.first
            });
        }
        string ans = "";
        while(maxheap.empty()==0){
            pair<int,char>p = maxheap.top();
            maxheap.pop();
            int b = p.first;
            while(b--){
                ans+=p.second;
            }
        }
        return ans;
    }
};