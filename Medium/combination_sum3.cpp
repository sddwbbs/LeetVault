class Solution {
public:
    void func(int k, const int& n, vector<int> cur, vector<vector<int>>& res, int i, int sum) {
        if (k == 0) {
            if (sum == n) res.push_back(cur);
            return;
        }

        if (sum > n) return;

        // k = 3   n = 7
        for (int j = i; j <= 9; ++j) {
            cur[cur.size() - k] = j; // 1
            func(k - 1, n, cur, res, j + 1, sum + j); 
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res; 
        vector<int> cur(k);
        func(k, n, cur, res, 1, 0);
        return res;
    }
};
