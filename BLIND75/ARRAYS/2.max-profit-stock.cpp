class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(prices[j] > prices[i]){
                    profit = max(profit, prices[j]-prices[i]);
                }
            }
        }

        return profit;
    }
};