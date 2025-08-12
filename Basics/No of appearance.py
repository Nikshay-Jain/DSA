L = [1,2,2,2,3,3,4,0,5,6,7,0,5,7,6,7]
n=int(input("Enter frequency for element to occur\n"))
t=0
rep=[]
for i in range(len(L)):
    t=L.count(L[i])
    if(t==n and rep.count(L[i])==0):
        rep.append(L[i])
    t=0
for i in range(len(rep)):
    print(rep[i])