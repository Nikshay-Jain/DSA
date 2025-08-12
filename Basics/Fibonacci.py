n=int(input("Enter no of terms\n"))
print("Fibonnacci Sequence :")
print("0")
a=1;b=0
for i in range(n-1):
    c=a+b
    a=b
    b=c
    print(c)