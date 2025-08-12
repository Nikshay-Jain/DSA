from typing import List

class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        break_pt = -1
        
        for i in range(n-2,-1,-1):
            if nums[i] < nums[i+1]:
                break_pt = i
                break

        if break_pt == -1:
            nums.reverse()
        else:
            for i in range(n-1, break_pt, -1):
                if nums[i] > nums[break_pt]:
                    nums[i], nums[break_pt] = nums[break_pt], nums[i]
                    break

            nums[break_pt+1:] = reversed(nums[break_pt+1:])
    
if __name__ == "__main__":
    sol = Solution()
    nums = [3, 2, 1]
    sol.nextPermutation(nums)
    print(nums)