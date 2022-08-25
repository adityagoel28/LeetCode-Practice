class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, int> m;
        for(int i = 0; i<emails.size(); i++){
            string a = "";
            int n = 0, skip = 0;
            for(int j = 0; j<emails[i].size(); j++){
                if(emails[i][j] == '@'){
                    n = 1;
                    skip = 0;
                }
                if(n == 1){
                    a += emails[i][j];
                }
                if(emails[i][j] != '.' and emails[i][j] != '+' and skip == 0){
                    a += emails[i][j];
                }
                if(emails[i][j] == '+' and n == 0){
                    skip = 1;
                }
            }
            m[a]++;
        }
        return m.size();
    }
};