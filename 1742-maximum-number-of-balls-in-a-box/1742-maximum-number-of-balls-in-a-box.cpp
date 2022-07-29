class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int count = 0, summ = 0;
        vector<int> digits;
        for(int i = lowLimit; i<=highLimit; i++){
            summ = 0;
            int j = i;
            while(j > 0){
                summ += j % 10;
                j = j/10;
            }
            digits.push_back(summ);
        }
        unordered_map<int, int> m;
        for(int i = 0; i<digits.size(); i++){
            m[digits[i]]++;
        }
        for(auto x:m){
            if(x.second > count) count = x.second; 
        }
        return count;
    }
};