class Solution {
public:
    int reverse(int n){
        vector<int> digits;
        while(n){
            int digit = n % 10;
            digits.push_back(digit);
            n /= 10;
        }
        int rev = 0, power = digits.size()-1;
        for(int i = 0; i<digits.size(); i++){
            rev += digits[i] * pow(10, power);
            power--;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int rev1 = reverse(num);
        int rev2 = reverse(rev1);
        if(rev2 == num) return true;
        return false;
    }
};