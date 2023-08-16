class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = m ? matrix[0].size() : 0; 
        vector<int> ans;

        int top = 0, down = m - 1, right = n - 1, left = 0, direct = 0;

        while (top <= down && left <= right) {
            switch (direct) {
                case 0: {
                    for (int col = left; col <= right; ++col) {
                        ans.push_back(matrix[top][col]);
                    }
                    ++top;
                    break;
                }
                case 1: {
                    for (int row = top; row <= down; ++row) {
                        ans.push_back(matrix[row][right]);
                    }
                    --right;
                    break;
                }
                case 2: {
                    for (int col = right; col >= left; --col) {
                        ans.push_back(matrix[down][col]);
                    }
                    --down;
                    break;
                }
                case 3: {
                    for (int row = down; row >= top; --row) {
                        ans.push_back(matrix[row][left]);
                    }
                    ++left;
                    break;
                }
            }

            direct = (direct + 1) % 4;
        }

        return ans;
    }
};

