class Solution {
public:
    bool hasAlternatingBits(int n) {
        int k = 1;
        if(n % 2 == 0)  k = 1;
        else k = 0;
        while(n){
            if(n & 1){
                if(k == 1)  return false;
                k = 1;
            }
            else{
                if(k == 0)  return false;
                k = 0;
            }
            n >>= 1;
        }
        return true;
    }
};