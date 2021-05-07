def solution(N, stages):
    answer = []
    
    for n in range(1,N+1) :
        p = 0
        f = 0
        for s in stages :
            if s >= n : p += 1
            if s == n : f += 1
        if p == 0 : answer. append([n,0])
        else : answer.append([n,float(f/p)])
    temp = sorted(answer, key=lambda x : x[1], reverse = True) 
    
    a = []
    for i in temp : a.append(i[0])
    return a
