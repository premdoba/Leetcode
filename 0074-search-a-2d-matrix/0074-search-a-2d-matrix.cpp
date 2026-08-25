class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top = 0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        int line = -1;
        if (top == bottom == right == left && matrix[top][left] == target)
            return true;
        while (top <= bottom) {
            int mid = (top+bottom)/2;
            if (matrix[mid][right] == target)
                return true;
            else if (matrix[mid][right] < target)
                top = mid+1;
            else
                bottom = mid-1;
            if(matrix[mid][0] <= target && matrix[mid][right] >= target)
                line = mid;
            else if (top < matrix.size() && matrix[top][0] <= target && matrix[top][right] >= target)
                line = top;
            else if (bottom >= 0 && matrix[bottom][0] <= target && matrix[bottom][right] >= target)
                line = bottom;
        }
        if (line == -1)
            return false;
        while (left <= right) {
            int mid = (left+right)/2;
            cout << line << endl << mid;
            if (matrix[line][mid] == target)
                return true;
            else if (matrix[line][mid] < target)
                left = mid+1;
            else
                right = mid-1;
        }
        return false;
    }
};