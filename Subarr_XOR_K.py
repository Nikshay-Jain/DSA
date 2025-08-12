class Solution:
    def subarraysWithXorK(self, nums, k):
        n = len(a)
        xr = 0
        mpp = defaultdict(int)
        mpp[xr] = 1 # setting the value of 0.
        cnt = 0

        for i in range(n):
            # prefix XOR till index i:
            xr = xr ^ a[i]

            # By formula: x = xr^k:
            x = xr ^ k

            # add the occurrence of xr^k
            # to the count:
            cnt += mpp[x]

            # Insert the prefix xor till index i
            # into the dictionary:
            mpp[xr] += 1
        return cnt