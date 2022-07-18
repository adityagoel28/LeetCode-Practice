class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> m;
        int maxLen = 0, windowStart = 0;
        for(int windowEnd = 0; windowEnd < fruits.size(); windowEnd++){
            m[fruits[windowEnd]]++;
            if(m.size() <= 2){
                int windowLen = windowEnd - windowStart + 1;
                maxLen = max(maxLen, windowLen);
            }
            else if(m.size() > 2){
                if(m.at(fruits[windowStart]) > 1){
                    m[fruits[windowStart]]--;
                }
                else    m.erase(fruits[windowStart]);
                windowStart++;
            }
        }
        return maxLen;
    }
};