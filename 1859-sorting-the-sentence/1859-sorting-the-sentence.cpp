class Solution {
public:
    string sortSentence(string s) {
        unordered_map<int, string> m;
        int count = 0, k = 1;
        string a = "", ans = "";
        for(int i = 0; i<s.length(); i++){
            if(s[i] == ' ' || i == s.length()-1){
                if(s[i] == ' '){
                    count++;
                    m[s[i-1]-48] = a;
                }
                else    m[s[i]-48] = a;
                a = "";
            }
            if((s[i] >= 65 && s[i] <= 90) || s[i] >= 97 && s[i] <=122)
                a += s[i];
        }
        vector<string> an(count+1);
        for(auto x:m){
            an[x.first - 1] = x.second;
        }
        for(int i = 0; i<an.size(); i++){
            ans += an[i];
            if(i != an.size() - 1)
                ans += " ";
        }
        // while(m.size() != 0){
        //     for(auto x:m){
        //         if(x.first == k){
        //             ans += x.second;
        //             m.erase(k);
        //             k +=1;
        //         }
        //     }
        // }
        return ans;
    }
};