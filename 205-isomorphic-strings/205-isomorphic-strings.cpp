class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s == t)  return true;
        else if(s.length() == t.length()){
            // map to map char of s to t
            unordered_map<char,char> Map;
            // set to keep mapped count, same char can't be mapped to 2 different char
            unordered_set<char> mapped;
            
            for(int i = 0; i<t.length(); i++){
                int cs = s[i], ct = t[i];
                if(Map.count(cs)){
                    if(Map[cs] == ct)    continue;
                    else return false;
                }
                else{
                    if(mapped.count(ct))    return false;
                    Map[cs] = ct;
                    mapped.insert(ct);
                }
            }
            return true;
        }
        return false;
    }
};