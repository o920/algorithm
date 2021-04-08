def solution(n, results):
    arr = [[False] * (n+1) for _ in range(n+1)]
    for i, j in results :
        arr[i][j] = True
    for i in range(1,n+1) :
        for j in range(1, n+1) :
            for k in range(1,n+1) :
                if arr[j][i] and arr[i][k] :
                    arr[j][k] = True

    answer = 0
    for i in range(1, n+1) :
        cnt = 0
        for j in range(1,n+1) :
            if arr[i][j] == True or arr[j][i]: cnt += 1
        if cnt == n-1 : answer += 1    
    return answer
    
    
