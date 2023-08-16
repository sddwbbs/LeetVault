class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int index = 0;

        for (int i = 0; i < nums.size(); ++i) {
            index = abs(nums[i]);

            nums[index] *= -1;
            if (nums[index] > 0) return abs(nums[i]);
        }

        return -1;
    }
};

