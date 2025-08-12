n=int(input())
for i in range(n):
    for j in range(1,n+1):
        if(j>=n-i):
            print("*", end="")
        else:
            print(" ", end="")
    print()