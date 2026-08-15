class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> mark(n*n,0);
        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j<grid[i].size(); j++) {
                mark[grid[i][j]-1] = mark[grid[i][j]-1] + 1;
            }
        }
        vector<int> ans(2);
        for (int i=0; i<mark.size(); i++) {
            if (mark[i] == 0)
                ans[1] = i+1;
            if (mark[i] == 2)
                ans[0] = i+1;
        }
        return ans;
   }
};