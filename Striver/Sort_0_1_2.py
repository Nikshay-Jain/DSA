class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        freq = [0,0,0]
        for i in range(n):
            freq[nums[i]]+=1
        
        nums[:] = [0]*freq[0] + [1]*freq[1] + [2]*freq[2]