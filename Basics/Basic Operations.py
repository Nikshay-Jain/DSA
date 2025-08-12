print(10/4)     #simple division float output
print(10//4)    #floor division int output
print(10%4)     #Remainder int output
print(10*4)     #Simple Mult int output
print(8**(1/3)) #Exponential float output as power is fractional
print(8**(3))   #Exponential int output as power is integral
print(2*2==5)   #boolean
if(False):
    print('hi')
else:
    print('bye')
    
w=input("What's cost?\n")
a=(w)*5
print(a)
x="Hello,World!"
y=5
print(x[-9:-2])
if(y>=5):
    print("Hello")
elif(y<5):
    print("Kite")
fruits=["apple","banana","carrot"]
for fr in fruits:
    print(fr)
    print("success")
hyp=lambda x,y:(x*x+y*y)**0.5
print(hyp(3,4))