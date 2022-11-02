class Solution {
public:
    string swap(string s, int n, int m){
        while(n < m){
            char temp = s[n];
            s[n++] = s[m];
            s[m--] = temp;
        }
        return s;
    }
    string reverseStr(string s, int k) {
        int n = s.size();
        for(int i = 0; i<n; i++){
            if((i + 2*k) <= n){
                int ptr1 = i, ptr2 = i + k - 1;
                s = swap(s, ptr1, ptr2);
                i += 2*k-1;
            }
            else if((i + 2*k) > n and (i + k) <= n){
                int ptr1 = i, ptr2 = i + k - 1;
                s = swap(s, ptr1, ptr2);
                i += 2*k-1;
            }
            else{
                int ptr1 = i, ptr2 = n-1;
                s = swap(s, ptr1, ptr2);
                i += k-1;
            }
        }
        return s;
    }
};