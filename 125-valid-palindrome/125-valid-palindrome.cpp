class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(int i = 0; i<s.length(); i++){
            if((s[i] >= 65 && s[i]<= 90)||(s[i] >= 97 && s[i] <=122)||(s[i]>=48 && s[i]<=57)){
                if(s[i] >= 65 && s[i] <= 90)    s[i] += 32;
                a += s[i];
            }
        }
        string rev = "";
        for(int i = a.length()-1; i>=0; i--){
            rev += a[i];
        }
        if(rev == a)    return true;
        return false;
    }
};