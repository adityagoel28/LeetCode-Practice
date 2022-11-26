class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> st;
        unordered_map<string, int> operators = {{"+", 1}, {"-", 1}, {"*", 1}, {"/", 1}};
        long n = tokens.size(), n1, n2, res;
        for(int i = 0; i<n; i++){
            if(operators.find(tokens[i]) != operators.end()){
                n1 = st.top();
                st.pop();
                n2 = st.top();
                st.pop();
            }
            if(tokens[i] == "+")        res = n1 + n2;
            else if(tokens[i] == "-")   res = n2 - n1;
            else if(tokens[i] == "*")   res = n1 * n2;
            else if(tokens[i] == "/")   res = n2 / n1;
            if(operators.find(tokens[i]) != operators.end())    st.push(res);
            else    st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};