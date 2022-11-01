class Solution {
public:
    string reverseVowels(string s) {
        int ptr1 = 0, ptr2 = s.size()-1;
        unordered_map<char, int> m;
        m['a']++;
        m['e']++;
        m['i']++;
        m['o']++;
        m['u']++;
        m['A']++;
        m['E']++;
        m['I']++;
        m['O']++;
        m['U']++;
        while(ptr1 < ptr2){
            if(m.find(s[ptr1]) != m.end() and m.find(s[ptr2]) != m.end()){
                char temp = s[ptr1];
                s[ptr1++] = s[ptr2];
                s[ptr2--] = temp;
            }
            else if(m.find(s[ptr1]) != m.end())  ptr2--;
            else if(m.find(s[ptr2]) != m.end())  ptr1++;
            else{
                ptr1++;
                ptr2--;
            }
        }
        return s;
    }
};