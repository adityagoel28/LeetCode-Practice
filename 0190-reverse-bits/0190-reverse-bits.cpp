class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t rev = 0, power = 31;
        while(n){
            rev += (n & 1) << power;
            n >>= 1;
            power--;
        }
        return rev;
    }
};