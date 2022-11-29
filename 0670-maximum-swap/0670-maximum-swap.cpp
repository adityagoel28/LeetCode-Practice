class Solution {
public:
    int maximumSwap(int num) {
        string numStr = to_string(num);
        int n = numStr.size(), maxDigit = INT_MIN, leftidx = -1, rightidx = -1, maxidx = -1;
        for(int i = n-1; i>=0; i--){
            if(numStr[i] > maxDigit){
                maxDigit = numStr[i];
                maxidx = i;
                continue;
            }
            if(numStr[i] < maxDigit){
                leftidx = i;
                rightidx = maxidx;
            }
        }
         // num is already in order
        if (leftidx == -1) return num;

        swap(numStr[leftidx], numStr[rightidx]);
        
        return stoi(numStr);
    }
};