class Solution {
public:
    void func(vector<int>& cur, vector<vector<int>>& res, const int& n, const int& k, int i) {
        if (cur.size() == k) {
            res.push_back(cur);
            return;
        }

        for (int j = i; j <= n; ++j) {
            cur.push_back(j);
            func(cur, res, n, k, j + 1);
            cur.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> cur;
        func(cur, res, n, k, 1);
        return res;
    }
};
