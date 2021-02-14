#실패
def solution(num, k):
    answer = []
    res = len(num)-k
    result = len(num)-k
    while True :
        if len(answer) == result : break
        if len(num) == res :
            answer.append(num[:])
            break
        max_idx, max_num = 0, 0
        for i in range(0,len(num)-res+1) :
            if max_num < int(num[i]) :
                max_num, max_idx = int(num[i]), i
        answer.append(num[max_idx])
        res -= 1
        num = num[max_idx+1:]
    return ''.join(answer)
    
    
#성공
def solution(num, k):
    answer = []
    for i in range(len(num)):
        while answer and k>0 and answer[-1] < num[i] :
            answer.pop()
            k-=1
        answer.append(num[i])
    return ''.join(answer[:len(answer)-k])
