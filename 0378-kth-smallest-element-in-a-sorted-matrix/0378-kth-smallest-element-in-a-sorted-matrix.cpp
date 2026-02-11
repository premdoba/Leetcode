class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int z = 0;
        vector<int> n(matrix.size()*matrix.size());
        for (int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[i].size(); j++) {
                n[z] = matrix[i][j];
                z++;
            }
        }
        sort(n.begin(),n.end());
        return n[k-1];
    }
};