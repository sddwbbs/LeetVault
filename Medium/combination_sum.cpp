class Solution {
public:
    void func(int sum, vector<int>& cur, const vector<int>& candidates, vector<vector<int>>& res, const int& target, int i) {
        if (sum == target) {
            res.push_back(cur);
            return;
        }

        if (sum > target) return;

        // [2,3,6,7]
        for (int j = i; j < candidates.size(); ++j) {
            cur.push_back(candidates[j]); // 2 2 3
            func(sum + candidates[j], cur, candidates, res, target, j);
            cur.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> cur;
        func(0, cur, candidates, res, target, 0);
        return res;
    }
};
