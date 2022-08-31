class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> coord;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    coord.push_back({i, j});
                }
            }
        }
        for(auto it:coord){
            int row = it.first, col = it.second;
            for(int i = 0; i<matrix[row].size(); i++){
                matrix[row][i] = 0;
            }
            for(int i = 0; i<matrix.size(); i++){
                matrix[i][col] = 0;
            }
        }
    }
};