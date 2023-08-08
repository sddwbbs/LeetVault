class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t size = nums.size();
        
        unordered_map<int, int> mp;

        for (int i = 0; i < size; ++i) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < size; ++i) {
            if (mp.count(target - nums[i]) > 0 && mp[target - nums[i]] != i) {
                return {i, mp[target - nums[i]]};
            }
        }

        return {};
    }    
};

