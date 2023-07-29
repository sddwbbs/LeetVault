class NumArray {
public:
    NumArray(vector<int>& nums) {
        this->values = nums;
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for (int i = left; i <= right; ++i) {
            sum += values[i];
        }

        return sum;
    }

private:
    vector<int> values;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
