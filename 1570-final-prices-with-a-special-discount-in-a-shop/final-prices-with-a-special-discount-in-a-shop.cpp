class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i = 0, n = prices.size(); i < n; ++i){
            int num = prices[i], j = i + 1;
            while(j < n && num < prices[j]) ++j;
            if(j < n) prices[i] -= prices[j];
        }
        return prices;
    }
};