def solution(N, road, K):
    answer = 0
    arr = [[500000] * (N+1) for _ in range(N+1)]
    
    for i in road : 
        arr[i[0]][i[1]], arr[i[1]][i[0]] = min(arr[i[0]][i[1]],i[2]), min(arr[i[1]][i[0]],i[2])
    for i in range(1, N+1) : arr[i][i] = 0
    for path in range(N+1) :
        for i in range(N+1) :
            for j in range(N+1) :
                if arr[i][j] > arr[i][path] + arr[path][j] :
                    arr[i][j] = arr[i][path] + arr[path][j]

    #print(arr)
    for i in arr[1] :
        if i <= K : answer += 1
    return answer
