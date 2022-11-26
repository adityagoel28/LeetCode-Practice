class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int value = 0, n = tokens.size();
        stack<long> st;
        for(int i = 0; i<n; i++){
            if(tokens[i] == "+"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int res = n1 + n2;
                st.push(res);
            }
            else if(tokens[i] == "-"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int res = n2 - n1;
                st.push(res);
            }
            else if(tokens[i] == "*"){
                long n1 = st.top();
                st.pop();
                long n2 = st.top();
                st.pop();
                long res = n1 * n2;
                st.push(res);
            }
            else if(tokens[i] == "/"){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.pop();
                int res = n2 / n1;
                st.push(res);
            }
            else    st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};