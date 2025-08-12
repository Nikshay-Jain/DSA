class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        matrix1 = [row[:] for row in matrix]
        n = len(matrix)
        
        for i in range(n):
            for j in range(n):
                matrix[i][j] = matrix1[n-j-1][i]

## Without using extra space
class Solution:
    def rotate(self, grid: List[List[int]]) -> None:
        n = len(grid)

        def transpose():
            for r in range(n):
                for c in range(r + 1, n):
                    grid[c][r], grid[r][c] = grid[r][c], grid[c][r]

        def reflect():
            for r in range(n):
                fc, lc = 0, n - 1
                while fc < lc:
                    grid[r][fc], grid[r][lc] = (
                        grid[r][lc],
                        grid[r][fc],
                    )
                    fc += 1
                    lc -= 1
        
        transpose()
        reflect()
