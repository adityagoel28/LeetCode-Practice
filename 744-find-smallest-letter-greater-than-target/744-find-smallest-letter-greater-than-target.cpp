class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0, end = letters.size() - 1;
        if(target == letters[end])  return letters[start];
        else if(target > letters[end])  return letters[start];
        while(start <= end){
            int mid = start + (end - start)/2;
            if(target < letters[mid])   end = mid-1;
            else if(target > letters[mid])  start = mid+1;
            else{
                if(letters[mid] != letters[mid+1])
                    return letters[mid+1];
                else{
                    start = mid+1;
                }
            }
        }
        return letters[start];
    }
};