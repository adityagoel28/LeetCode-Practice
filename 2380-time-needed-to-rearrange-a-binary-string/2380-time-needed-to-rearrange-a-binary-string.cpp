class Solution {
public:
    string replace(string s){
        for(int i = 0; i<s.size()-1; i++){
            if(s[i] == '0' && s[i+1] == '1'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
        return s;
    }
    int secondsToRemoveOccurrences(string s) {
        int time = 0, n = 0, m = 1;
        for(int i = 0; i<s.size()-1; i++){
            if(s[i] == '0' && s[i+1] == '1'){
                m = 0;
            }
        }
        if(m == 1)  return 0;
        while(n == 0){
            time++;
            s = replace(s);
            n = 1;
            for(int i = 0; i<s.size()-1; i++){
                if(s[i] == '0' && s[i+1] == '1'){
                    n = 0;
                }
            }
        }
        return time;
    }
};