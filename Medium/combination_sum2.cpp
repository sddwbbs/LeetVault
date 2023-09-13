class Solution {
public:
    void func(int sum, vector<vector<int>>& res, vector<int>& cur, const vector<int>& candidates, const int& target, int i) {
        if (sum == target) {
            res.push_back(cur);
            return;
        }

        if (sum > target) return;

        // [1,2,2,2,5], target = 5
        for (int j = i; j < candidates.size(); ++j) {
            if (j != i && candidates[j] == candidates[j - 1]) continue;
            cur.push_back(candidates[j]); 
            func(sum + candidates[j], res, cur, candidates, target, j + 1);
            cur.pop_back();
        }
    }

    // [2,5,2,1,2], target = 5
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res; 
        vector<int> cur;
        sort(candidates.begin(), candidates.end());
        func(0, res, cur, candidates, target, 0);
        return res;
    }
};
