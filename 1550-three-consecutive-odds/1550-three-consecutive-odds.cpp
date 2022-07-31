class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        // int count = 0;
        // for(int i = 1; i<arr.size(); i++){
        //     if(count >= 2)   return true;
        //     if(arr[i] % 2 != 0 && arr[i-1] % 2 !=0 ) count++;
        // }
        // if(count < 2)   return false;
        // return true;
        
        int count = 0;
        if(arr.size() >= 3){
            for(int i = 0; i<arr.size()-2; i++){
                if(arr[i] % 2 != 0 && arr[i+1] % 2 != 0  && arr[i+2] %2 != 0) return true;
            }
        }
        return false;
    }
};