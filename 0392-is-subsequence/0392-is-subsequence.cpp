class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0, ts = t.size(), ss = s.size();
        // for(int i = 0; i<ts; i++){
        //     if(t[i] == s[j]){
        //         if(j == ss-1)   return true;
        //         j++;
        //     }
        // }
        // return false;
        
        // Better
        for(int i = 0; i<ts and j<ss; i++){
            if(t[i] == s[j])    j++;
        }
        return (j == ss);
    }
};