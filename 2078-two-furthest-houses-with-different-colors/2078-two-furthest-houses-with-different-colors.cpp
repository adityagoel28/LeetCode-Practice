class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ptr1 = 0, ptr2 = colors.size()-1, maxx = 0;
        while(ptr1 <= ptr2){
            if(colors[ptr1] != colors[ptr2]){
                maxx = ptr2 - ptr1;
                break;
            }
            // ptr1++;
            ptr2--;
        }
        ptr1 = 0, ptr2 = colors.size()-1;
        while(ptr1 <= ptr2){
            if(colors[ptr1] != colors[ptr2]){
                if(ptr2 - ptr1 > maxx)  maxx = ptr2- ptr1;
                break;
            }
            ptr1++;
            // ptr2--;
        }
        return maxx;
    }
};