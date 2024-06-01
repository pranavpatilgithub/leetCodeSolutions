class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum = prices[0];
        int max = 0;
        for(int i = 1; i<prices.size(); i++){
            if(prices[i] < sum){
                sum = prices[i];
            }
            else if(prices[i] - sum > max){
                max = prices[i] - sum;
            }
        }
        return max;
    }
};
