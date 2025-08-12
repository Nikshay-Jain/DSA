with open("test.txt","r+") as file:
    a=file.read()
    print(a)
    file.write("How are you?")
    print(a)
file.close()