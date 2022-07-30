class Solution {
public:
    string replaceDigits(string s) {
        for(int i = 1; i<s.length(); i+=2){
            int j = s[i] - '0'; // char to int conversion
            s[i] = s[i-1]  + j;
        }
        return s;
    }
};