class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count = 0, ptr1 = 0, ptr2 = people.size()-1;
        sort(people.begin(), people.end());
        while(ptr1 <= ptr2){
            count++;
            if(people[ptr1] + people[ptr2] <= limit)    ptr1++;
            ptr2--;
        }
        return count;
    }
};