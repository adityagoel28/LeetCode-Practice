class Solution {
public:
    vector<int> summ(int num){
        int sum = 0, count = 0;
        vector<int> ans;
        while(num > 0){
            sum += (num % 10) * (num % 10);
            num = num/ 10;
            count++;
        }
        ans.push_back(sum);
        ans.push_back(count);
        return ans;
    }
    bool isHappy(int n) {
        unordered_map<int, int> m;
        while(n != 1 && m[n] < 2){
            vector<int> ans1 = summ(n);
            int digit = ans1[1];
            n = ans1[0];
            m[n]++;
        }
        for(auto x:m){
            if(x.second > 1)    return false;
        }
        return true;
    }
};