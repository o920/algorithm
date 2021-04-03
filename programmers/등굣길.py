def solution(m, n, puddles):    
    routine = [[0]*n for _ in range(m)]
    for i in puddles : routine[i[0]-1][i[1]-1] = -1
    routine[0][0] = 1
    for i in range(m):
        for j in range(n) : 
            if (i==0 and j== 0) : continue
            if routine[i][j] == -1 : 
                routine[i][j] = 0
                continue
            if i == 0 : routine[i][j] = routine[i][j-1]
            elif j == 0 : routine[i][j] = routine[i-1][j]
            else : routine[i][j] = (routine[i][j-1] + routine[i-1][j])%1000000007
    return routine[m-1][n-1]
