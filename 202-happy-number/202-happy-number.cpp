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
        vector<int> anss = summ(n);
        int digit = anss[1];
        int num1 = anss[0];
        unordered_map<int, int> m;
        m[num1]++;
        while(num1 != 1 && m[num1] < 2){
            vector<int> ans1 = summ(num1);
            digit = ans1[1];
            num1 = ans1[0];
            m[num1]++;
        }
        for(auto x:m){
            if(x.second > 1)    return false;
        }
        return true;
    }
};