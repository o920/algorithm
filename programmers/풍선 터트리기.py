def solution(a):
    answer = 2
    L = len(a)
    dp_left, dp_right= [a[0]]*L, [a[-1]]*L
    for i in range(1, L) :
        dp_left[i] = min(dp_left[i-1], a[i])
    for i in range(L-2,0,-1) :
        dp_right[i] = min(dp_right[i+1],a[i])
    
    for i in range(1,L-1) :
        if a[i] > max(dp_left[i-1], dp_right[i+1]) : continue
        else : answer += 1
    return answer
