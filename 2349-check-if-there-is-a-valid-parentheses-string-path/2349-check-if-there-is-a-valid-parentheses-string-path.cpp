class Solution {
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<bool>>> check(m, vector<vector<bool>> (n,(vector<bool> (m+n+1 , false))));
        return isValid(grid,0,0,0,check);
    }
    bool isValid (vector<vector<char>>& grid, int i, int j, int open, vector<vector<vector<bool>>>& check) {
        if (i >= grid.size() || j >= grid[0].size()) 
            return false;

        if (grid[i][j] == '(')
            open++;
        else
            open--;

        if (open < 0)
            return false;

        if (check[i][j][open] == true)
            return false;

        if (i == grid.size()-1 && j == grid[0].size()-1)
            return open == 0;
        
        check[i][j][open] = true;
            
        return isValid(grid,i,j+1,open,check) ||
            isValid(grid,i+1,j,open,check);
    }
};