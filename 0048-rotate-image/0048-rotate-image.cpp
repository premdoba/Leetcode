class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> copy = matrix;
        int i = matrix.size()-1;
        int j = 0;
        for (i=matrix.size()-1; i>=0; i--) {
            for (j=0; j<matrix[i].size(); j++) {
                matrix[j][matrix.size()-1-i] = copy[i][j];
            }
        }
    }
};