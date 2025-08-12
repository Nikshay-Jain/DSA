import string
data=""
dict={}
newfile=open("IIT M Code.txt", "w")
print(string.ascii_letters)
for i in range(len(string.ascii_letters)):
    dict[string.ascii_letters[i]]=string.ascii_letters[i-1]
print(dict)
with open("IIT M.txt") as f:
    while(True):
        c=f.read(1)
        if not c:
            print("End of file")
            break
        elif c in dict:
            data=dict[c]
        else:
            data=c
        newfile.write(data)
        print(data)
newfile.close()