class Solution:
    def setZeroes(matrix) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m =len(matrix)
        n=len(matrix[0])
        zeroes=[]
        for i in range(m):
            for j in range(n):
                if matrix[i][j]==0:
                    zeroes.append([i,j])
        
        for x,y in zeroes:
            for i in range(n):
                matrix[x][i]=0
            for i in range(m):
                matrix[i][y]=0
        return matrix
    
if __name__ == "__main__":
    matrix =[[1, 1, 1], 
             [1, 0, 1]]
    
    print(Solution.setZeroes(matrix))