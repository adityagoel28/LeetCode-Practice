class Solution {
public:
    string convertToBase7(int num) {
        string ans = "";
        int k = 0;
        if(num == 0)    return "0";
        else if(num < 0){
            num = abs(num);
            k = 1;
        }
        while(num > 0){
            int d = num % 7;
            ans += to_string(d);
            num /= 7;
        }
        if(k == 1)  ans += '-';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};