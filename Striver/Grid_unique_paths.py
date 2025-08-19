class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        total_steps = m + n - 2
        r = min(m - 1, n - 1)
        
        res = 1
        for i in range(1, r + 1):
            res = res * (total_steps - r + i) // i
        return res
    
# Time Complexity: O(min(m, n))
# Space Complexity: O(1)
# No large factorial calculations needed, as we use reduced form of (m+n-2)!/(m-1)!(n-1)!