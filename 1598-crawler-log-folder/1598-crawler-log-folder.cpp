class Solution {
public:
    int minOperations(vector<string>& logs) {
        int pos = 0;
        for(int i = 0; i<logs.size(); i++){
            if(pos > 0 && logs[i] == "../") pos -= 1;
            if(logs[i] != "./" && logs[i] != "../") pos += 1;
        }
        return pos;
    }
};