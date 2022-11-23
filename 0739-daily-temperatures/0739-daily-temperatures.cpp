class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for(int i = 0; i<n; i++){
            while(!st.empty() && temperatures[st.top()] < temperatures[i]){
                int j = st.top();
                ans[j] = i - j;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};