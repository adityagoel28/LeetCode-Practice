class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        unordered_map<string, int> m;
        string a = "", b ="";
        for(int i = 0; i<s1.length(); i++){
            if(s1[i] == ' ' || i == s1.length()-1){
                if(i == s1.length()-1)  a += s1[i];
                m[a]++;
                a = "";
            }
            
            else    a += s1[i];
        }
        for(int i = 0; i<s2.length(); i++){
            if(s2[i] == ' ' || i == s2.length()-1){
                if(i == s2.length()-1)  b += s2[i];
                m[b]++;
                b = "";
            }
            else    b += s2[i];
        }
        for(auto x:m){
            if(x.second == 1)   ans.push_back(x.first);
        }
        return ans;
    }
};