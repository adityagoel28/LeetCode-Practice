class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& matrix){
        int n = matrix.size();
        for(int i = 0; i<(n+1)/2; i++){
            for(int j = 0; j<n/2; j++){
                int temp = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-j-1];
                matrix[n-1-i][n-j-1] = matrix[j][n-1-i];
                matrix[j][n-1-i] = matrix[i][j];
                matrix[i][j] = temp;
            }
        }
        return matrix;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int k = 4;
        while(k--){
            if(mat == target)   return true;
            mat = rotate(mat);
        }
        return false;
    }
};