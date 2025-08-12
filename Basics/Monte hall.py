import  random

j=1
w=0
l=0
while(j<=10):
    d=[0]*2
    ch=int(input("Enter your choice from 1-3\n"))
    c=ch-1
    dollar=random.randint(0,2)
    d.insert(dollar,"Dollar")
    d[0:2]
    for i in range(3):
        if(i!=dollar and i!=c):
            print("Goat door is: ",(i+1))
            break
    yn=input("Do you want to switch? y/n: \n")
    if(yn=='n'):
        if(d[c]==d[dollar]):
            print("Win")
            w+=1
        else:
            print("Lose")
            l+=1
    else:
        if(d[c]==d[dollar]):
            print("Lose")
            l+=1
        else:
            print("Win")
            w+=1
    print("Win: ",w)
    print("Lose: ",l)
    j+=1
    d=[0]*2