class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0, windowStart = 0;
        unordered_map<char, int> m;
        for(int i = 0; i<s.length(); i++){
            m[s[i]]++;
            while(m[s[i]] > 1){
                m[s[windowStart]]--;
                windowStart++;
            }
            if(i-windowStart + 1 > len)     len = i - windowStart + 1;
        }
        return len;
    }
};