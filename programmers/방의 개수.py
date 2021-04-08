from collections import defaultdict, deque
def solution(arrows):
    move = [(-1,0),(-1,1),(0,1),(1,1),(1,0),(1,-1),(0,-1),(-1,-1)]
    edge = defaultdict()
    vertex = defaultdict()
    queue = deque()
    
    current = (0,0)
    
    
    room = 0
    for i in arrows :      
        for j in range(2) :
            x, y = current[0]+move[i][0], current[1]+move[i][1]
            vertex[(x,y)] = False
            edge[(current,(x,y))] = False
            current = (x,y)
            queue.append(current)

    current = (0,0)  
    vertex[current] = True
    while queue :
        x, y = queue.popleft()
        
        if vertex[(x,y)] == True and (edge[(current,(x,y))] == False or edge[((x,y), current)] == False) :
            room += 1
        vertex[(x,y)] = True
        edge[(current,(x,y))], edge[((x,y), current)] = True, True
        current = (x,y)


    return room
            
            
