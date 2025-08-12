class Solution:
    def findMissingRepeatingNumbers(self, nums):
        nos = set()
        n = len(nums)
        for i in nums:
            if i not in nos:
                nos.add(i)
            else:
                A = i
                break

        B = A + int(n*(n+1)/2)-sum(nums)
        return [A, B]