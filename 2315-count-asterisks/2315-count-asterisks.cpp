class Solution {
public:
    int countAsterisks(string s) {
        int count = 0, bar = 0;
        for(int i = 0; i<s.length(); i++){
            if(bar % 2 == 0){
                if(s[i] == '*') count++;
            }
            if(s[i] == '|'){
                bar++;
            }
        }
        return count;
    }
};