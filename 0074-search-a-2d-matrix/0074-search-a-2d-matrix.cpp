class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS = matrix.size();
        int cols = matrix[0].size();

        int top = 0;
        int bottom = ROWS - 1;
        int row = -1;

        // Find the correct row
        while (top <= bottom) {
            row = (top + bottom) / 2;

            if (target > matrix[row][cols - 1]) {
                top = row + 1;
            }
            else if (target < matrix[row][0]) {
                bottom = row - 1;
            }
            else {
                break;
            }
        }

        if (top > bottom) {
            return false;
        }

        // Binary search within the row
        int l = 0;
        int r = cols - 1;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (target > matrix[row][m]) {
                l = m + 1;
            }
            else if (target < matrix[row][m]) {
                r = m - 1;
            }
            else {
                return true;
            }
        }

        return false;
    }
};