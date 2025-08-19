import bisect

class Solution:
    def findMedian(self, matrix):
        r, c = len(matrix), len(matrix[0])
        
        # Search range is min element to max element in the matrix
        min_val = min(row[0] for row in matrix)
        max_val = max(row[-1] for row in matrix)
        
        med_pos = (r*c+1)//2

        while min_val < max_val:
            mid = (min_val + max_val)//2
            pos = 0
            for row in matrix:
                pos += bisect.bisect_right(row, mid)
            
            if pos < med_pos:
                min_val = mid + 1
            else:
                max_val = mid
                
        return min_val
        
if __name__ == "__main__":
    sol = Solution()
    matrix = [[1, 3, 5], [2, 4, 6], [7, 8, 9]]
    print(sol.findMedian(matrix))