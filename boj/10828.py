import sys
stack = []
t = int(sys.stdin.readline())
for i in range(t) :
    f = sys.stdin.readline().split()
    if f[0] == "push" :
        stack.append(f[1])
    elif f[0] == "pop" : 
        if not stack : print(-1)
        else :
            a = stack.pop()
            print(a)
    elif f[0] == "size" : print(len(stack))
    elif f[0] == "empty" : 
        if not stack : print(1)
        else : print(0)
    elif f[0] == "top" : 
        if not stack : print(-1)
        else : print(stack[-1])
