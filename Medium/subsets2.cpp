class Solution {
public:
    void solution(vector<vector<int>>& ans, vector<int>& temp, vector<int>& nums, int index) {
        ans.push_back(temp);

        for (int i = index; i < nums.size(); ++i) {
            if (i > index && nums[i] == nums[i - 1]) continue;
            temp.push_back(nums[i]);
            solution(ans, temp, nums, i + 1);
        }
        if (!temp.empty()) temp.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp = {};
        sort(nums.begin(), nums.end());
        solution(ans, temp, nums, 0);
        return ans;
    }
};
