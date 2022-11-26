class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size(), eat = 0;
        // stack<int> st;
        // for(int i = n-1; i>=0; i--){
        //     st.push(students[i]);
        // }
        // for(int i = 0; i<n; i++){
        //     if(st.top() == sandwiches[i])
        // }
        int ones = 0;
        for(int i = 0; i<n; i++)
            if(students[i] == 1)    ones++;
        int zeroes = n - ones;
        for(int i = 0; i<n; i++){
            if(sandwiches[i] == 1){
                if(ones > 0)    ones--;
                else break;
            }
            else if(sandwiches[i] == 0){
                if(zeroes > 0)    zeroes--;
                else break;
            }
        }
        return ones + zeroes;
    }
};