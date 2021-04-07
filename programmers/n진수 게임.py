def solution(n, t, m, p):
    temp = [0]
    tube = ''
    turn = 1
    if p == m : p = 0
    for i in range(0,1000*m) :
        if len(tube) == t : break
        
        while i>0 : 
            if i == 1 : 
                temp.append(i)    
                break
            else : 
                if i % n > 9 : 
                    h = hex(i%n)
                    temp.append(h[2:].upper())
                else : temp.append(i%n)
            i = int(i/n)
                
        while temp :
            a = temp.pop()
            if turn == p : tube = tube + str(a)
            if len(tube) == t : break
            turn = (turn+1)%m
            
        
    return tube
