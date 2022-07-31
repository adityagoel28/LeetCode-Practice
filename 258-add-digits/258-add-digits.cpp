class Solution {
public:
    int add(int n){
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n = n / 10;
        }
        return sum;
    }
    int addDigits(int num) {
        while(num > 9){
             num = add(num);
        }
        return num;
    }
};