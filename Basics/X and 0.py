import numpy
board=numpy.array([['-','-','-'],['-','-','-'],['-','-','-']])
p1s='X'
p2s='0'
def place(sym):
    print(numpy.matrix(board))
    while(True):
        r=int(input("Enter row no:\n"))
        c=int(input("Enter column no:\n"))
        if r>0 and c>0 and r<4 and c<4 and board[r-1][c-1]=='-':
            board[r-1][c-1]=sym
            break
        else:
            print("Invalid input. Pls enter again")

def cr(sym):
    t=0
    for i in range(3):
        for j in range(3):
            if board[i][j]==sym:
                t+=1
        if t==3:
            print(sym," Won")
            print(numpy.matrix(board))
            return True
        t=0
    return False
        
def cc(sym):
    t=0
    for i in range(3):
        for j in range(3):
            if board[j][i]==sym:
                t+=1
        if t==3:
            print(sym," Won")
            print(numpy.matrix(board))
            return True
        t=0
    return False
        
def cd(sym):
    t=0
    for i in range(3):
        if board[i][i]==sym:
            t+=1
    if t==3:
        print(sym," Won")
        print(numpy.matrix(board))
        return True
    t=0
    for i in range(3):
        if board[i][2-i]==sym:
          t+=1
    if t==3:
        print(sym," Won")
        print(numpy.matrix(board))
        return True
    return False

def won(sym):
    return cr(sym) or cc(sym) or cd(sym)

def play():
    for i in range(9):
        if(i%2==0):
            print("\nX turn")
            place(p1s)
            if won(p1s):
                break
        else:
            print("\n0 turn")
            place(p2s)
            if won(p2s):
                break
    if not won(p1s) and not won(p2s):
        print("Draw")
play()