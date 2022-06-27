/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
    let profit = 0
    let n = prices.length
    for(let i=n-2;i>=0;i--) {
        if(prices[i+1] > prices[i])
            profit += prices[i+1] - prices[i]
    }
    return profit
};