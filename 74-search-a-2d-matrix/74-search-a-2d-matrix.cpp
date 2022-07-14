class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0, m = matrix.size(), n = matrix[0].size(), end  = m*n-1;;

        // for(int i = 0; i<m; i++){
        //     for(int j = 0; j<n; j++){
        //         if(matrix[i][j] == target)  return true;
        //     }
        // }
        
        while(start <= end){
            int mid = start + (end-start)/2;
            int element = matrix[mid/n][mid%n];
            if(element == target)    return true;
            else if(target > element)   start = mid+1;
            else    end = mid-1;
        }
        
        return false;
    }
};