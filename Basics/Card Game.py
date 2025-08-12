def Card():
    import random
    import string
    n=int(input("Enter length of string\n"))
    card1=[0]*n
    card2=[0]*n
    pos1=random.randrange(0,n)
    pos2=random.randrange(0,n)
    sym=list(string.ascii_letters)
    samesymbol=random.choice(sym);
    sym.remove(samesymbol)
    if(pos1==pos2):
        card1[pos1]=samesymbol
        card2[pos2]=samesymbol
    else:
        card1[pos1]=samesymbol
        card2[pos2]=samesymbol
        card1[pos2]=random.choice(sym)
        sym.remove(card1[pos2])
        card2[pos1]=random.choice(sym)
        sym.remove(card2[pos1])
    i=0
    while(i<n):
        if(i!=pos1 and i!=pos2):
            alpha1=random.choice(sym)
            sym.remove(alpha1)
            alpha2=random.choice(sym)
            sym.remove(alpha2)
            card1[i]=alpha1
            card2[i]=alpha2
        i+=1
    print(card1)
    print(card2)
    a=input("Spot same character\n")
    if(a==samesymbol):
        print("Congo")
    else:
        print("Oops! Its: ",samesymbol)
    Card()
Card()