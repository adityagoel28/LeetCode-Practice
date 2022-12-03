class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size(), cnt = 0, ans = 0;
        for(int i = 0; i<n; i++){
            cnt += s[i] == 'L' ? 1 : -1;
            if(cnt == 0) ans++;
        }
        return ans;
    }
};