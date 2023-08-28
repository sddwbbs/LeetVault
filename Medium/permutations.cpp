class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.size() <= 1) return {nums};

        vector<vector<int>> ans;

        for (int i = 0; i < nums.size(); ++i) {
            vector<int> v(nums.begin(), nums.end());
            v.erase(v.begin() + i);
            auto res = permute(v);

            for (int j = 0; j < res.size(); ++j) {
                vector<int> temp(res[j].begin(), res[j].end());
                temp.insert(temp.begin(), nums[i]);
                ans.push_back(temp);
            }
        }

        return ans;
    }
};

