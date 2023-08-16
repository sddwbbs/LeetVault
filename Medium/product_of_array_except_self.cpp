class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};
        vector<int> left(n, 1), right(n, 1);

        left[0] = nums[0];
        right[n - 1] = nums[n - 1];

        for (int i = 1; i < n; ++i) {
            left[i] = left[i - 1] * nums[i]; 
        }

        for (int i = n - 2; i >= 0; --i) {
            right[i] = right[i + 1] * nums[i];
        }

        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                nums[0] = right[1];
                continue;
            }

            if (i == n - 1) {
                nums[n - 1] = left[n - 2];
                continue;
            }

            nums[i] = left[i - 1] * right[i + 1];
        }

        return nums;
    }
};

