i=0
j=0
t=0
c=0
l=[5,7,6,2,9,8]
for i in range(len(l)):
    for j in range(len(l)):
        if(l[i]<l[j]):
            t=l[j]
            l[j]=l[i]
            l[i]=t
            c+=1
        else:
            c+=1
            continue
print(l)
print(c)