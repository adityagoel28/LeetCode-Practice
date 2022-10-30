class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t count = 0, mask = 1;
        for(int i = 0; i<32; i++){
            if((n & mask) != 0) count++;
            mask <<= 1;
        }
        // while(n){
        //     n &= (n-1);
        //     count++;
        // }
        return count;
    }
};