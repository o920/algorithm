def solution(clothes):
    answer = {}
    for i in clothes :
        if i[1] in answer : answer[i[1]] += 1
        else : answer[i[1]] = 1
    
    ans = 1
    for i in answer :
        ans *= (answer[i]+1)
    
    return ans-1
