def solution(n, times):
    answer = []
    times.sort()
    start, end = 1, times[-1]*n
    while start<=end :
        temp = []
        mid = int((start+end)/2)
        for i in times : temp.append(int(mid/i))  
        if sum(temp) >= n :
            end = mid-1
            answer.append(mid)
        else : start = mid+1
    return min(answer)
