class Solution {
public:
    vector<int> dp;
    int minCost(vector<int> cost, int n){
        if(n < 0)   return 0;
        if(n == 0 || n == 1)    return cost[n];
        if(dp[n] != 0)  return dp[n];
        dp[n] = cost[n] + min(minCost(cost, n-1), minCost(cost, n-2));
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size(), costs = 0;
        for(int i = 0; i<n; i++){
            dp.push_back(0);
        }
        return min(minCost(cost, n-1), minCost(cost, n-2));
    }
};