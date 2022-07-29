class Solution {
public:
    int summ(int num){
        int sum = 0;
        while(num > 0){
            sum += (num % 10) * (num % 10);
            num = num/ 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int, int> m;
        while(n != 1 && m[n] < 2){
            n = summ(n);
            m[n]++;
        }
        for(auto x:m){
            if(x.second > 1)    return false;
        }
        return true;
    }
};