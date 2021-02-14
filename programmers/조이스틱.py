def solution(name):
    n = [min(ord(i)-ord('A'),ord('Z')-ord(i)+1) for i in name]
    idx, answer = 0,0
    while True :
        answer += n[idx]
        n[idx] = 0
        if sum(n) == 0 : break
        left, right = 1,1
        while n[idx - left] == 0 : left += 1
        while n[idx + right] == 0 : right += 1
        answer += left if left < right else right
        idx += -left if left < right else right
    return answer
