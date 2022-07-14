class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0, sum1 = 0, i1 = -1;
        for(int i = 0; i<arr.size(); i++){
            sum += arr[i];
        }
        cout<<sum;
        if(sum % 3 == 0){
            for(int j = 0; j<arr.size(); j++){
                sum1 += arr[j];
                if(sum1 == sum/3){
                    sum1 = 0;
                    if(i1 == -1) i1 = j;
                    else if(i1 != -1 && j!= arr.size()-1){
                        return true;
                    }
                }
                
            }
        }
        return false;
    }
};