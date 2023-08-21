class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int ans = 0;

        unordered_set<int> numSet(nums.begin(), nums.end());

        for (auto num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                int temp = num;
                int streak = 1;

                while (numSet.find(temp + 1) != numSet.end()) {
                    ++streak;
                    ++temp;
                }

                ans = max(ans, streak);
            }
        }

        return ans;
    }
};
