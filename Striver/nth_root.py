class Solution:
    def NthRoot(self, n, m):
        if m==0:
            return 0
        if m==1 or n==1:
            return 1

        l = [i for i in range(1,m)]
        s = 0
        e = m-1
        while s<e:
            mid = (s+e)//2
            if l[mid]**n == m:
                return l[mid]
            elif l[mid]**n < m:
                s = mid+1
            else:
                e = mid-1
        return -1

if __name__ == "__main__":
    n = int(input("Enter the value of n: "))
    m = int(input("Enter the value of m: "))
    solution = Solution()
    result = solution.NthRoot(n, m)
    print(f"The {n}th root of {m} is: {result}")