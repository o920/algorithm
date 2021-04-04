
def solution(n):
    arr = [[0] * i for i in range(1,n+1)]
    dx = [1,0,-1]
    dy = [0,1,-1]
    direction = 2
    value = 0
    x, y = -1, 0
    while n :
        direction = (direction + 1) % 3 
        for i in range(0, n) :
            x, y = x+dx[direction], y+dy[direction] 
            value += 1
            arr[x][y] = value
        n -= 1
        
    answer= []
    for i in arr :
        answer = answer + i
    return answer
    
    
