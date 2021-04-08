def solution(distance, rocks, n):
    rocks.sort()
    start, end = 0, distance

    while start <= end :
        cnt = 0
        temp = distance
        current = 0
        mid = int((start+end)/2)
        for rock in rocks :
            dist = rock - current
            if dist >= mid : 
                temp = min(temp, dist)
                current = rock 
            else : 
                cnt += 1

        if cnt > n : end = mid - 1
        else : 
            answer = temp
            start = mid + 1
    return answer
        
