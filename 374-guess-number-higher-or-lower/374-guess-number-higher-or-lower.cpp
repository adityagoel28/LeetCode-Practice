/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int start = 1, ans = 0;
        while(start <= n){
            int mid = start + (n-start)/2;
            int gues = guess(mid);
            if(gues == -1){
                n = mid - 1;
            }
            else if(gues == 1){
                cout<<2;
                start = mid + 1;
            }
            else{
                cout<<3;
                ans = mid;
                break;
            }
        }
        return ans;
    }
};