class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(begin(prices),end(prices));
        int total=prices[0]+prices[1];
        if (total<=money) return money-total;
        return money;
    }
};