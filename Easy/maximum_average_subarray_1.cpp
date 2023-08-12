class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0, maxi = INT_MIN, n = nums.size(), begin = 0, end = 0;

        if (n == k) {
            for (auto num : nums) {
                sum += num;
            }
            return sum / static_cast<double>(k);
        }

        while (end < n) {
            sum += nums[end];

            if (end - begin + 1 == k) {
                maxi = max(maxi, sum);
                sum -= nums[begin];
                ++begin;
                ++end;
            } else if (end - begin + 1 < k) {
                ++end;
            }
        }

        return maxi / static_cast<double>(k);
    }
};

