def fact(f,n):
    if(n>0):
        f*=n
        fact(f,n-1)
    else:
        print(f)
def main():
    n=int(input("Enter no\n"))
    f=1
    fact(f,n)