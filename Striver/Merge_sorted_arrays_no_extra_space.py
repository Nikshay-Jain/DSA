class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        arr = []
        nums1_copy = nums1[:m]
        nums2_copy = nums2[:n]
        idx1 = idx2 = 0

        while idx1 < m and idx2 < n:
            if nums1_copy[idx1] < nums2_copy[idx2]:
                arr.append(nums1_copy[idx1])
                idx1 += 1
            else:
                arr.append(nums2_copy[idx2])
                idx2 += 1
        
        arr.extend(nums1_copy[idx1:])
        arr.extend(nums2_copy[idx2:])

        nums1[:] = arr

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        p1 = m - 1  # last valid element in nums1
        p2 = n - 1  # last element in nums2
        p = m + n - 1  # last position in nums1

        # While there are elements in nums2 to merge
        while p2 >= 0:
            if p1 >= 0 and nums1[p1] > nums2[p2]:
                nums1[p] = nums1[p1]
                p1 -= 1
            else:
                nums1[p] = nums2[p2]
                p2 -= 1
            p -= 1