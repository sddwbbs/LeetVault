class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = prices[0];

        for (auto val : prices) {
            if (val < min) {
                min = val;
                continue;
            }

            if (val - min > profit) {
                profit = val - min;
            }
        }

        return profit;
    }
};

