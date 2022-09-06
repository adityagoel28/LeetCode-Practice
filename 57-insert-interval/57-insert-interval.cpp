class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals){
        if(intervals.size() < 2)    return intervals;
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans;
        for(int i = 0; i<intervals.size(); i++){
            if(ans.empty() || ans.back()[1] < intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else{
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        intervals.push_back(newInterval);
        ans = merge(intervals);
        return ans;
    }
};