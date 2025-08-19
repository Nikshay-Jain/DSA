class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        minm = float(inf)
        pro = 0
        for i in range(n):
            minm = min(minm, prices[i])
            pro = max(pro, prices[i] - minm)

        return pro