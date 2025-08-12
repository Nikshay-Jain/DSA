import turtle
import random

seurat=turtle.Turtle()
turtle.bgcolor("Black")
w=5
h=7
dd=25
clr=["blue","cyan","red","yellow","orange","white"]
seurat.setpos(-250,250)

def spiral(m,n):
    k=0
    l=0
    f=0
    while(k<m and l<n):
        col=random.randint(0,6)
        seurat.color(clr[col])
        if(f==1):
            seurat.right(90)
        for i in range(l,n):
            seurat.dot()
            seurat.forward(dd)
        k+=1
        f=1
        seurat.right(90)
        for i in range(k,m):
            seurat.dot()
            seurat.forward(dd)
        n-=1
        seurat.right(90)
        if(k<m):
            for i in range(n-1,l-1,-1):
                seurat.dot()
                seurat.forward(dd)
            m-=1
        seurat.right(90)
        if (l<n):
            for i in range(m-1,k-1,-1):
                seurat.dot()
                seurat.forward(dd)
            l+=1
spiral(20,20)
turtle.done()