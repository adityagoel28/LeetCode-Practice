class Solution {
public:
    string intToRoman(int num) {
        string ans = "";
        int n = num;
        if(n / 1000 != 0){
            int j = n / 1000;
            n = n % 1000;
            while(j--){
                ans += "M";
            }
        }
        if(n >= 900){
            ans += "CM";
            n = n % 900;
        }
        else if(n / 500 != 0){
            int j = n / 500;
            n = n % 500;
            while(j--){
                ans += "D";
            }
        }
        if(n >= 400){
            ans += "CD";
            n = n % 400;
        }
        else if(n / 100 != 0){
            int j = n / 100;
            n = n % 100;
            while(j--){
                ans += "C";
            }
        }
        if(n >= 90){
            ans += "XC";
            n = n % 90;
        }
        else if(n / 50 != 0){
            int j = n / 50;
            n = n % 50;
            while(j--){
                ans += "L";
            }
        }
        if(n >= 40){
            ans += "XL";
            n = n % 40;
        }
        else if(n / 10 != 0){
            int j = n / 10;
            n = n % 10;
            while(j--){
                ans += "X";
            }
        }
        if(n == 9){
            ans += "IX";
            n = n % 9;
        }
        else if(n / 5 != 0){
            int j = n / 5;
            n = n % 5;
            while(j--){
                ans += "V";
            }
        }
        if(n == 4){
            ans += "IV";
            n = n % 4;
        }
        else if(n / 1 != 0){
            int j = n / 1;
            while(j--){
                ans += "I";
            }
        }
        return ans;
    }
};