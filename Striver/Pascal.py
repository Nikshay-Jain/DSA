class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows<=0:
            return
        if numRows==1:
            return [[1]]
        pascal = [[1], [1,1]]
        for i in range(2,numRows):
            t = [0] * (i + 1)
            for j in range(i+1):
                if j == 0 or j == i:
                    t[j] = 1
                else:
                    t[j] = pascal[i-1][j-1] + pascal[i-1][j]
            pascal.append(t)
        return pascal