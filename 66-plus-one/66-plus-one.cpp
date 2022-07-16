class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int j = -1;
        if(digits[digits.size()-1] < 9){
            digits[digits.size()-1] = digits[digits.size()-1] + 1;
        }
        else{
            for(int i = digits.size()-1; i>=0; i--){
                if(digits[i] != 9){
                    digits[i] += 1;
                    j = i;
                    break;
                }
            }
            if(j == -1){
                for(int k = 0; k < digits.size(); k++){
                    digits[k] = 0;
                    digits[0] = 1;
                }
                digits.push_back(0);
            }
            else{
                for(int k = j+1; k < digits.size(); k++){
                    digits[k] = 0;
                }
            }
            
        }
        return digits;
    }
};