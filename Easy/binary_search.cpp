class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin = 0;
        int end = nums.size() - 1;
        int pivot = 0;

        while (begin <= end) {
            pivot = (begin + end) / 2;

            if (target == nums[pivot]) {
                return pivot;
            }

            if (target > nums[pivot]) {
                begin = pivot + 1;
            } else {
                end = pivot - 1;
            }
        }

        return -1;
    }
};

