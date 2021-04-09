def solution(a):
    left, right = [a[0]] * len(a) , [a[-1]] * len(a)
    answer = 0
    for i in range(1,len(a)-1) : left[i] = min(left[i-1], a[i])
    for i in range(len(a)-2, -1, -1) : right[i] = min(right[i+1], a[i])
    answer = 2
    for i in range(1,len(a)-1) :
        if a[i] > max(left[i-1], right[i+1]) : continue
        else : answer += 1
    return answer
