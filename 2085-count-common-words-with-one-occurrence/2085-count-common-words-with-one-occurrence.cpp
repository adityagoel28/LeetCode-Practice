class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int count = 0;
        unordered_map<string, int> m1;
        unordered_map<string, int> m2;
        for(int i = 0; i<words1.size(); i++){
            m1[words1[i]]++;
        }
        for(int i = 0; i<words2.size(); i++){
            m2[words2[i]]++;
        }
        for(auto x: m1){
            if(x.second == 1 && m2.find(x.first) != m2.end() && m2[x.first] == 1){
                count++;
            }
        }
        return count;
    }
};