class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t count = 0, mask = 1;
        for(int i = 0; i<32; i++){
            // 1st method
            // if((n & mask) != 0) count++;
            // mask <<= 1;
            
            // 2nd method
            count += n % 2;
            n /= 2;
            
            // 3rd method
            // n >>= 1; // doing it like rev of bits problem
        }
        // 4th method
        // while(n){
        //     n &= (n-1);
        //     count++;
        // }
        return count;
    }
};