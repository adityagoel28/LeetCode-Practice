class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxDiff = 0, minValue = prices[0];
        for(int i = 0; i<prices.size(); i++){
            minValue = min(minValue, prices[i]);
            maxDiff = max(maxDiff, prices[i] - minValue);
        }
        return maxDiff;
    }
};