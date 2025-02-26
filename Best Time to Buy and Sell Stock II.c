int maxProfit(int* prices, int pricesSize) {
    int ans = 0;
    if (pricesSize < 2)
        return 0;
        
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i - 1] <  prices[i])
            ans += prices[i] - prices[i - 1];
        }
    return ans;
}
