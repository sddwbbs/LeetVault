class Solution {
public:
    void func(vector<int> nums, vector<vector<int>>& ans, int i, size_t n) {
        if (i >= n - 1) { 
            ans.push_back(nums);
            return;
        }

        for (int k = i; k < n; ++k) {
            if (i != k && nums[i] == nums[k]) continue;
            swap(nums[i], nums[k]);
            func(nums, ans, i + 1, n);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        vector<vector<int>> ans;
        func(nums, ans, 0, nums.size());
        return ans;
    }
};

