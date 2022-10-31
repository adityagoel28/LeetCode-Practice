class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorr = x^y, dist = 0;
        while(xorr){
            if(xorr % 2)    dist++;
            xorr >>= 1;
        }
        return dist;
    }
};