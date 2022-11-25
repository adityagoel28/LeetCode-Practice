class Solution {
public:
    int calPoints(vector<string>& operations) {
        int score = 0, n = operations.size();
        stack<int> st;
        for(int i = 0; i<n; i++){
            if(operations[i] == "C"){
                score -= st.top();
                st.pop();
            }
            else if(operations[i] == "D"){
                st.push(st.top() * 2);
                score += st.top();
            }
            else if(operations[i] == "+"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.push(n1);
                st.push(n1+ n2);
                score += st.top();
            }
            else{
                st.push(stoi(operations[i]));
                score += st.top();
            }
        }
        return score;
    }
};